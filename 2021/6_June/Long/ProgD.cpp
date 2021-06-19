#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// Codechef June 21 Long Prog D
void solve() {
	int n, m;
	cin>>n>>m;
	int a[n], dp[n];

	for(int i = 0; i < n; i++){
		cin>>a[i];
		if(a[i] == 0){
			dp[i] = INF;
		}
		else{
			dp[i] = 0;
		}
	}
	dp[0] = 0; // City 1 is where they start
	int ind = -1, ind2 = -1;
	for(int i = 0; i < n; i++){
		// left to right distance 
		if(a[i] == 1){ 
			ind = i;
		}
		if(ind != -1){
			if(dp[i] != 0){
				dp[i] = min(dp[i], i - ind); //min(dist from right or INF, dist from left)
			}
		}
		// right to left distance
		if(a[n - i - 1] == 2){ 
			ind2 = n - i - 1;
			//cout<<"ind2 = "<<ind2<<"\n";
		}
		if(ind2 != -1){
			if(dp[n - i - 1] != 0){
				//cout<<"dp[i] before: "<<"i -> "<<i<<" dp[i] -> "<<dp[i]<<"\n";
				//cout<<"What it should become: "<<ind2 - (n - i - 1)<<"\n";
				dp[n - i - 1] = min(dp[n - i - 1], ind2 - (n - i - 1));
				// min(dist from left or INF, dist from right)
				//cout<<"New dp[i] = "<<dp[i]<<"\n";

			}
		}
	}

	int b[m];
	
	for(int i = 0; i < m; i++){
		cin>>b[i];
		b[i]--;
		if(dp[b[i]] == INF){
			cout<<"-1 ";
		}
		else{
			if(dp[b[i]] == 0){
				cout<<"0 ";
			}
			else{
				cout<<dp[b[i]]<<" ";
			}
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
