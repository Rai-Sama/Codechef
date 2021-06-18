#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC April 21 LTime Problem C
void solve() {
	float l;
	int c = 0;
	string s;
	cin>>l;
	cin>>s;
	for(int i = 0; i < l; i++)
	{	
		if(s[i] == '1'){
			c+=1;
		}
		if (c > i/2){
			l = i;
			break;
		}
	}
	if(c >= l/2)
		cout<<"YES";
	else
		cout<<"NO";
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