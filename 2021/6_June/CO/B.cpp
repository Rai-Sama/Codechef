#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// Codechef June 21 Cook-off Problem B
vector<int> factors(int n){
	vector<int> f;
	for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(n/i == i){ // Add square root
                f.push_back(i);
            }
            else{ // Both factors
                f.push_back(n/i);
                f.push_back(i);
            }
        }
    }
    return f;
}

void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ones = 0, z = 0, ind;
	for(int i = 0; i < n; i++){
		if(s[i] == '1'){
			ones++;
		}
	}
	vector<int> fs = factors(n);

	ll res = INF;
    
    for(int f : fs){
        vector<int> cnt(n);
        for(int i = 0; i < f; i++){
            for(int j = i; j < n; j += f){
                if(s[j] == '1'){ // no. of 1's at f dist
                    cnt[i]++;
                }
            }
        }
       	int poss = n / f;
        for(int i = 0; i < f; i++){
            ll curr = poss + ones - 2*cnt[i];
            res = min(res, curr); // min. of prev f dist reqd. conversions and current
        }
 
    }
    cout<<res;
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
