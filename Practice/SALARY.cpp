#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC practice
void solve() {
	int n, temp, cnt = 0;
	cin>>n;
	vector<int> sals;
	for(int i = 0; i < n; i++){
		cin>>temp;
		sals.push_back(temp);
	}
	
	sort(sals.begin(), sals.end());

	cout<<accumulate(sals.begin(), sals.end(), 0) - sals[0] * n;
	cout<<"\n";
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