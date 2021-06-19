#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC Practice
void solve() {
	int n, m, k, temp, cnt = 0;
	cin>>n>>m>>k;
	unordered_map<int, int> um;
	for(int i = 0; i < k; i++){
		cin>>temp;
		um[temp]++;
		if(temp <= n && um[temp] == 2){
			cnt++;
		}
	}
	if(k == 1){
		cout<<0<<" ";
		cout<<"\n";
		return;
	}
	cout<<cnt<<" ";
	for(int i = 0; i <= n; i++){
		if(um[i] > 1){
			cout<<i<<" ";
		}
	}
	cout<<"\n";
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
