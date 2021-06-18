#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7; 
const ll INF = 1e9;

//CC May 21 Long Problem B
void solve() {
   	int n, x, k;
    cin>>n>>x>>k;
    int m = n+1;
    
    if(k > m){
      cout<<"NO\n";
      return;
    }

    if(x % k == 0){
      cout<<"YES\n";
      return;
    }

    if((m - x) % k == 0){
      cout<<"YES\n";
      return;
    }
    cout<<"NO\n";
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