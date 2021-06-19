#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC Practice
void solve() {
	int n, k, val, temp, cnt = 0;
	cin>>n>>k;
	k = k%7;
	for(int i = 0; i < n; i++){
		cin>>val;
		temp = val%7 + k;
		if(temp == 7 || temp == 0)
			cnt++;
	}
	cout<<cnt;
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