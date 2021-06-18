#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


//CC April 21 LTime Problem E
void solve() {
	ll n, w, wr;
	map<ll, ll> m;
	cin>>n>>w>>wr;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
		m[a[i]]++;
	}
	if(wr >= w){
		cout<<"YES\n";
	}
	else
	{
		w -= wr;
		for(int i = 0; i < n; i++)
		{
			if(m[a[i]] % 2 == 0){
				w -= m[a[i]] * a[i];
				m[a[i]] = 0;
			}
			else{
				w -= (m[a[i]] - 1) *a[i];
				m[a[i]] = 1;
			}

		}
		if(w <= 0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}

}
//for(int i = 0; i < n; i++)

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t=1;
	cin>>t;
	while(t--)
	{
		//cout << "Case #" << t  << ": ";
		solve();
	}

	//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	
}