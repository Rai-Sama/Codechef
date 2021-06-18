#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7; 
const ll INF = 1e9;

//CC May 21 Long Problem D
void solve() {
    int x = 0, o = 0, us = 0, x_f = 0, o_f = 0, x_c = 0, o_c = 0;
    char a[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>a[i][j];
            if(a[i][j] == 'X')
                x++;
            if(a[i][j] == 'O')
                o++;
            if(a[i][j] == '_')
                us++;
        }
    }
    
    // Wins for X -> vertical, diag, horizontal
    if(a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
        x_f = 1;
    if(a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')
        x_f = 1;
    if(a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')
        x_f = 1;
    if(a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
        x_f = 1;
    if(a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')
        x_f = 1;
    if(a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')
        x_f = 1;
    if(a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')
        x_f = 1;
    if(a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
        x_f = 1;

    // Wins for O -> vertical, diag, horizontal
    if(a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')
        o_f = 1;
    if(a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')
        o_f = 1;
    if(a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')
        o_f = 1;
    if(a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
        o_f = 1;
    if(a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')
        o_f = 1;
    if(a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')
        o_f = 1;
    if(a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')
        o_f = 1;
    if(a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
        o_f = 1;

    if(x_f == 1 && o_f == 1 || (((x - o) < 0) || ((x - o) > 1)))
        cout<<3<<"\n";
    else if(x == 0 && o == 0 && us == 9) 
        cout<<2<<"\n";
    else if(x_f == 1 && o_f == 0 && x > o)
        cout<<1<<"\n";
    else if(x_f == 0 && o_f == 1 && x == o)
        cout<<1<<"\n";
    else if(x_f == 0 && o_f == 0 && us == 0)
        cout<<1<<"\n";
    else if(x_f == 0 && o_f == 0 && x > 0)
        cout<<2<<"\n";
    else
        cout<<3<<"\n";
}   

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    cin>>t;
    while(t--)
    {
        //cout << "Case #" << t  << ": ";
        solve();
    }

    //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    
}