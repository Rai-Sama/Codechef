#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long
 
//CC May 21 LTime Problem C - Practice  
int a[10000001];

void sieve(ll n) {
    vector<int> primes, is_prime(n + 1, 1);
    ll cnt = 0;
    for (ll i = 2; i * i <= n; i++)
        if (is_prime[i])
            for (ll j = i + i; j <= n; j += i)
                is_prime[j] = 0;

    for (ll i = 2; i <= n; i++)
        if (is_prime[i])
            a[i] = a[i-1] + 1;
        else{
        	a[i] = a[i-1];
        }

}

void solve() {
	ll n, cnt = 1;
	cin>>n;
	if(n == 2){
		cout<<1<<"\n";
		return;
	}
	if(n == 3 || n == 4){
		cout<<2<<"\n";
		return;
	}
	cout<<a[n] - a[n/2] + 1<<"\n";
}
//for(int i = 0; i < n; i++)

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	cin>>t;
	sieve(1e7);
	while(t--)
	{
		//cout << "Case #" << t  << ": ";
		solve();
	}

	//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	
}
