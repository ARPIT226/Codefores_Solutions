Problem Link: https://codeforces.com/contest/455/problem/A
Problem Name: A. Boredom
Problem Tags: dp, (1500*)
My codeforces ID: arpit_26


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void sol(){
	
	ll n, sabse_bada=INT_MIN;  cin>>n;
	vector<int> v(100005,0);
	for(ll i=0;i<n;i++){
		ll x;  cin>>x;
		v[x]++;
		sabse_bada= max(sabse_bada,x);
	}
	
	vector<ll> dp(100005,0);
	dp[0]=0;
	dp[1]=v[1];
	for(ll i=2;i<=100000;i++){
		dp[i]=max(dp[i-1], dp[i-2]+v[i]*i);
	}
	
	cout<<dp[sabse_bada];
}
	
int main(){
    ll t=1;   //cin>>t;
    while(t--){
        sol();
    }
    return 0; 
}
