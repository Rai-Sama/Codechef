#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC Practice
void solve() {
    string a;
    cin>>a;
    int n, i = 0, pairs = 0;
    n = a.length();
    while(i < n){
        if(a[i] == 'x'){
            while(a[i++] != 'y'){
                if(i >= n){
                    cout<<pairs<<"\n";
                    return;
                }
                if(a[i] == 'y'){
                    pairs++;
                }
            }
        }
        if(a[i] == 'y'){
            while(a[i++] != 'x'){
                if(i >= n){
                    cout<<pairs<<"\n";
                    return;
                }
                if(a[i] == 'x'){
                    pairs++;
                }
            }
        }
    }
    cout<<pairs<<"\n";
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
