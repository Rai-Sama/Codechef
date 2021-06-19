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
	int n, x, flavors = 0, cnt = 0;
	cin>>n>>x;
	int a[n];
	unordered_map<int, int> um;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		um[a[i]]++;
		if(um[a[i]] == 1){
			flavors++;
		}
	}

	if(flavors == n){
		cout<<n - x<<"\n";
		return;
	}

	if(flavors <= n - x){
		cout<<flavors<<"\n";
		return;
	}

	while(n > x){
		n--;
		if(flavors >= 0){
			cnt++;
		}
		else{
			break;
		}
		flavors--;

		
	}
	cout<<cnt<<"\n";
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
