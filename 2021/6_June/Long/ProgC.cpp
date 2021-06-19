#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1000000007;
const ll INF = 1e9;

// Codechef June 21 Long Problem C

// a & b = 0 if a = 0 or b = 0 
// or a = power of 2 and b = a - 1 
// or b = power of 2 and a = b - 1
// how to find such tuples of length n?
// Logic so far
// (all zeroes = 1) + (different number of zeroes(2-n) with every other no.)
// + (fix any two of the positions such that they satisfy the above condition)
// Use combinatorics to find one formula

// total (2^n - 1)^m possibilites

ll qexp(ll a, ll b, ll m) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve() {
	ll n, m;
	cin>>n>>m;
	ll res = qexp(2, n, MOD) - 1;
	res = qexp(res, m, MOD); 
	//res = qexp(res, m, MOD);
	cout<<res<<"\n";
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
