#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// CC Practice
void solve() {
	int n, temp, flag = 0, inc = 0;
	vector<int> v;
	int cnt[8] = {0};
	cin>>n;
	int prev = 0;
	for(int i = 0; i < n; i++){
		cin>>temp;
		if(prev == 7)
		{
			if(temp == 6){
				inc = 1;
				cnt[temp]--;
			}
			else
				if(temp != 7)
					flag = 1;
		}
		else
		{
			if(inc == 0){
				if(temp > 7 || temp < 1 || (temp != prev && temp != prev + 1))
					flag = 1;
				else
					cnt[temp]++;
				
			}
			else{
				if(temp >= 7 || temp < 1 || (temp != prev && temp != prev - 1))
					flag = 1;
				else
					cnt[temp]--;
			}
		}
		prev = temp;
	}
	
	for(int i = 1; i <= 6; i++){
			if(cnt[i] != 0)
				flag = 1;
	}

	if(flag == 1)
		cout<<"no";
	else
		cout<<"yes";
	cout<<"\n";
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