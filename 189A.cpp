Problem Link: https://codeforces.com/contest/189/problem/A
Problem Name: A. Cut Ribbon
Problem Tags: brute force, dp, (1300*)
My codeforces ID: arpit_26

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int helper(int a, int b, int c, int n, vector<int> &dp){
	
	if(n==0){
		return 0;
	}
	
	if(n<0){
		return INT_MIN;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	
	int x=helper(a,b,c,n-a,dp);
	int y=helper(a,b,c,n-b,dp);
	int z=helper(a,b,c,n-c,dp);
	
	return dp[n] = 1 + max(max(x,y),z);
	
}

void solve(){
	
	
	int n,a,b,c;   cin>>n>>a>>b>>c;
	vector<int> dp(n+1,-1);
	cout<<helper(a,b,c,n,dp)<<endl;
		
}
	
int main(){
    ll t=1;   //cin>>t;
    while(t--){
        solve();
    }
    return 0; 
}
