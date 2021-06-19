#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC Practice
void solve() {
    ll n;
    cin>>n;
    ll current, prev, sub, count = 0;
    for(int i = 0; i < n; i++){
        cin>>current;
        if(i == 0 || current < prev)
            sub = 1;
        else
            sub++;
        count += sub; 
        prev = current;
    }
    cout<<count<<"\n";
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