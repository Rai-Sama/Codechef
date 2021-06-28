#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


// Codechef June 21 Lunch time Problem B
void solve() {
	ll n;
	cin>>n;
	vector<ll> odds;
	vector<ll> evens;
	ll e = 0, o = 0;
	for(ll i = 0; i < n; i++){
		ll temp;
		cin>>temp;
		if(temp&1){
			odds.push_back(temp);
			o++;
		}
		else{
			evens.push_back(temp);
			e++;
		}
	}

	ll i = 0, j = 0;

	while(i  < e){
		cout<<evens[i]<<" ";
		i++;
	}
	while(j < o){
		cout<<odds[j]<<" ";
		j++;
	}
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
