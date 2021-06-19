#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//CC Practice
void solve() {
	int n, k, f, temp1, temp2;
	cin>>n>>k>>f;
	vector<pair<int, int>> v;
	for(int i = 0; i < n; i++){
		cin>>temp1>>temp2;
		v.push_back(make_pair(temp1, temp2));
	}
	sort(v.begin(), v.end());
	int maxe = v[0].second;
	int tot = v[0].first;
	for(int i = 1; i < n; i++){
		if(v[i].first > maxe){
			tot += v[i].first - maxe;
		}
		if(v[i].second > maxe){
			maxe = v[i].second;
		}
	}
	tot += f - maxe;
	if(tot >= k)
		cout<<"YES"<<"\n";
	else
		cout<<"NO"<<"\n";
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
