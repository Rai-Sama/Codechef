#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


//CC April 21 Starters Problem A
void solve() {
	int x, y, xr, yr, d;
	cin>>x>>y>>xr>>yr>>d;
	if(xr*d <= x  && yr*d <= y)
		cout<<"YES";
	else
		cout<<"NO";
	cout<<"\n";
}

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