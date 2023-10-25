/* Question Link: https://codeforces.com/problemset/problem/1872/B
Question Tags: greedey, implementation, 900*
My Codeforces ID: arpit_26 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;   cin>>n;
    ll k=INT_MAX;
    ll a,b;
    vector < pair < ll , ll > >v;   
    for(ll i = 0 ; i < n ; i++) {
        cin>>a>>b;
        v.push_back({a,b});
    }
        
    for(ll i = 0 ; i < (ll)v.size(); i++) {
        k = min(v[i].first+(v[i].second-1)/2,k);
    }
    cout<<k<<endl;
}

int main()
{
    int n;   cin>>n;
    while(n--){
        solve();
    }

    return 0;
}
