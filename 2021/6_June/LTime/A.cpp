#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// Codechef June 21 Lunch time Problem A
void solve() {
	string a;
	cin>>a;
	if(a[0] == '1'){
		cout<<1<<0;
		for(int i = 1; a[i]; i++){
			cout<<a[i];
		}
	}
	else{
		cout<<1;
		for(int i = 0; a[i]; i++){
			cout<<a[i];
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
