#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC Practice
void solve() {
	int x, y, k, n, p, c, flag;
	cin>>x>>y>>k>>n;
	int min_pgs = x - y;
	flag = 0;
	for(int i = 0; i < n; i++){
		cin>>p>>c;
		if(p >= min_pgs && c <= k)
		{
			flag = 1;
		}
	}
	if(flag == 1){
		cout<<"LuckyChef\n";
	}
	else
		cout<<"UnluckyChef\n";
}
//for(int i = 0; i < n; i++)
//cout<<"\n";

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