#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC May 21 LTime Problem A
void solve() {
	int a, b, c, d, k;
	cin>>a>>b>>c>>d>>k;
	int dist = abs(c - a) + abs(d - b);
	if(dist == k){
		cout<<"YES\n";
		return;
	}
	if(dist < k){
		if((k - dist) & 1){
			cout<<"NO\n";
		}		
		else
			cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
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
