#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// Codechef June 21 Cook-off Problem A
void solve(){
	int n,q;
	cin>>n>>q;
	ll a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	while(q--){
		ll x, flag = 0;
		cin>>x;
		ll root = lower_bound(a, a + n, x) - a;
        if(root < n && a[root] == x)
            cout<<"0\n";
        else{
	        if(root&1){
	           	cout<<"NEGATIVE\n";
	        }
	        else{
	           	cout<<"POSITIVE\n";
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
	//cin>>t;
	while(t--)
	{
		//cout << "Case #" << t  << ": ";
		solve();
	}

	//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	
}
