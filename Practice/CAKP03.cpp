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
	string t, s;
	cin>>t>>s;
	int k = 0;
	int tl;
	tl = t.length();
	for(int i = 0; s[i]; i++){
		if(s[i] == t[k]){
			k++;
		}
		if(k == tl)
			break;
	}
	if(k == tl){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
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
