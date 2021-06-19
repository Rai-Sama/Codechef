#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// CC Practice
void solve() {
	ll n, q, x, v;
	ll pos[32] = {0};
	cin>>n>>q;
	ll a[n], res[32] = {0};
	
	for(int i = 0; i < n; i++){
		cin>>a[i];
		ll temp = a[i];
		ll k = 0;
		while(temp){
			if(temp&1){
				pos[k]++;
				res[k] = 1;
			}
			k++;
			temp /= 2;
		}
	}
	ll ans = 0, val = 1;
	for(int i = 0; i < 31; i++){
		ans = ans + val * res[i];
		val *= 2;
	}
	cout<<ans<<"\n";

	for(int i = 0; i < q; i++){
		cin>>x>>v;
		x--;
		ll temp = a[x];
		ll k = 0;
		while(temp){
			if(temp&1){
				pos[k]--;
				if(pos[k] == 0)
					res[k] = 0;
			}
			k++;
			temp /= 2;
		}
		a[x] = v;
		temp = v;
		k = 0;
		while(temp){
			if(temp&1){
				pos[k]++;
				res[k] = 1;
			}
			k++;
			temp /= 2;
		}
		ans = 0;
		val = 1;
		for(int i = 0; i < 31; i++){
			ans = ans + val * res[i];
			val *= 2;
		}
		cout<<ans<<"\n";
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
