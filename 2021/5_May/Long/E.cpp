#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7; 
const ll INF = 1e9;

//CC May 21 Long Problem E
void solve() {
   	ll n, m, cnt = 0;
    cin>>n>>m;
    vector<ll> dp(n+1, 1);
    for(ll i = 2; i <= n; i++){
      ll temp = m % i;
      cnt += dp[temp];
      for(ll j = temp; j <= n; j+=i){
        dp[j]++;
      }
    }
    cout<<cnt<<"\n";
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