#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC May 21 Cook-off Problem A
int a[1000][1000];

void solve() {
    int x1, y1, x2, y2, sum = 0;

    cin>>x1>>y1>>x2>>y2;
    x1--;
    y1--;
    x2--;
    y2--;
    for(int i = x1; i <= x2; i++){
        sum += a[i][y1];
    }
    for(int i = y1+1; i <= y2; i++){
        sum += a[x2][i];
    }
    cout<<sum<<"\n";

}
//for(int i = 0; i < n; i++)

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    a[0][0] = 1;
    for(int i = 0; i < 1000; i++){
        int k = i + 1;
        for(int j = 0; j < 1000; j++){
            if(j == 0){
                if(i != 0)
                    a[i][j] = a[i-1][j] + (i + 1);
            }
            else{
                a[i][j] = a[i][j-1] + k;
                k += 1;
            }
        }
    }
    int t=1;
    cin>>t;
    while(t--)
    {
        //cout << "Case #" << t  << ": ";
        solve();
    }

    //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    
}