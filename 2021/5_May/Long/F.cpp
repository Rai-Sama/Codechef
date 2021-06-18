    #include <bits/stdc++.h>
    
    using namespace std;
    
    #define ar array
    #define ll long long
    
    const int MAX_N = 1e5 + 1;
    const ll MOD = 1e9 + 7; 
    const ll INF = 1e9;
    
    //CC May 21 Long Problem F
    void solve() {
        int t, k, index, frequency;
        cin>>t;
       	int n = 4e6+2; // Total (4 * 1e6) + 1 elements
       	vector<int> freq(n);
       	vector<int> dp(n);
        for(int i = 1; i < n; i++){
            freq[i] = i;
        }
        for(int i = 2; i < n; i++){ 
            if(freq[i] == i){ // i < 4 or prime
                freq[i] = i - 1;
                for(int j = 2 * i; j < n; j += i){
                    if(j == i * 2){ 
                        freq[j] = (j/2 - 1) * 2;
                    }
                    else{
                        freq[j] = (i - 1) * (freq[j] / i);
                    } 
                } 
            }
        }
        // Humara program padhnaa band kariye, khud koshish kariye. Aatmanirbhar baniye
        for(int i = 1; i < n; i++){ // 1 to (4 * 1e6) + 1
            dp[i] += i - 1;
            for(int j = 2 * i; j < n; j += i){
                frequency = 1 + freq[j / i];
                dp[j] +=  i * (frequency / 2); // i * frequency of its occurrence
            }
        }
        while(t--){
            cin>>k;
            index = 4 * k + 1;
            cout<<dp[index]<<"\n"; // 4 * k + 1 -> Length of the series
        }
    }	
    
    int main() 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t=1;
        //cin>>t;
        while(t--)
        {
            //cout << "Case #" << t  << ": ";
            solve();
        }
    
        //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
        
    }