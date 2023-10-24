Question Link: https://codeforces.com/problemset/problem/1777/B
Question Tags: combinatorics, greedy, math, *900
My Codeforces ID: arpit_26


#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int mod = 1000000007;
    long long n;   cin>>n;
    long long ans = (n*(n-1) % mod);
    
	for(int i=2;i<=n;i++){
		ans = (ans*i) % mod;
	}
	
	cout<<ans<<endl;
}

int main()
{
    int t;   cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
