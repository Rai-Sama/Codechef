#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


//CC April 21 Starters Problem B
void solve() {
	int x, y, n, m, p = 0, f = 0;
	cin>>n>>m;
	cin>>x>>y;
	char ans;
	for(int i = 0; i < n; i++)
	{	
		f = 0;
		p = 0;
		for(int j = 0; j < m; j++)
		{	
			cin>>ans;
			if(ans == 'P')
				p++;
			if(ans == 'F')
				f++;
		}
	if(f >= x || (f >= (x-1) && p >= y))
		cout<<"1";
	else
		cout<<"0";

	}
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