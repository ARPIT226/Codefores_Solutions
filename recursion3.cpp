/* Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M
Codeforces ID: arpit_26 */


# include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll suffix_sum(ll a[],ll n, ll m){
    if(m==0){       //base case
        return 0;
    }
    else{
        return a[n-1]+suffix_sum(a,n-1,m-1);   // magical assumtion
    }
}

int main(){
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<suffix_sum(a,n,m)<<endl;
    return 0;
}
