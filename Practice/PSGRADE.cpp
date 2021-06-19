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
	int am, bm, cm, t, a, b, c;
	cin>>am>>bm>>cm>>t>>a>>b>>c;
	if(a < am || b < bm || c < cm || a + b + c < t){
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
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
