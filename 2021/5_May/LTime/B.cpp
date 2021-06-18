#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC May 21 LTime Problem B
void solve() {
	int n, k, temp, res = 0;
	cin>>n>>k;
	string s;
	cin>>s;
	for(int i = 0; i < n - 1; i++){
		if(s[i] == s[i+1]){
			res += 2;
		}
		else{
			res += 1;
		}
	}
	for(int i = 0; i < k; i++){
		cin>>temp;
		temp--;
		if(temp > 0){
			if(s[temp - 1] == s[temp]){
				res -= 1;
			}
			else{
				res += 1;
			}
		}
		if(temp < n - 1){
			if(s[temp + 1] == s[temp]){
				res -= 1;
			}
			else{
				res += 1;
			}
			
		}
		cout<<res<<"\n";
		if(s[temp] == '0'){
			s[temp] = '1';
		}
		else{
			s[temp] = '0';
		}
	}

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
