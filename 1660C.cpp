//Question Link: https://codeforces.com/problemset/problem/1660/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;   cin>>s;
    int n = s.size();
    
    map<char,int> m;
    vector<int> dp(n+1,INT_MAX);
    dp[0] = 0;
    
    for(int i=0; i<n; i++){
        // as a pair le rhe h
        if(m.find(s[i])!=m.end()){  
            dp[i+1] = min(dp[i+1], dp[m[s[i]]] + (i-m[s[i]])-1);
        }
        
        // as a pair nhi le rhe rhe (remove kr rhe h)
        dp[i+1] = min(dp[i]+1,dp[i+1]);
        m[s[i]] = i;
        
    }
    
    cout<<dp[n]<<endl;
}

int main()
{
    int t;   cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
