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
	ll n, r, maxt;
	cin>>n>>r;
	ll a[n], b[n];
	for(ll i = 0; i < n; i++){
		cin>>a[i]; // timestamps
	}
	for(ll i = 0; i < n; i++){
		cin>>b[i]; // fatigues
	}
	maxt = b[0]; // Max tension
	for(ll i = 0; i < n - 1; i++){
		if((a[i+1] - a[i]) * r < b[i]){ // If tension is left over
			b[i+1] = b[i+1] + (b[i] - (a[i+1] - a[i]) * r); //  
		}
		if(b[i+1] > maxt){
				maxt = b[i+1];
		} 
	}
	cout<<maxt<<"\n";
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
