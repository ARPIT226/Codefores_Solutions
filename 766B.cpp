/* Question Link: https://codeforces.com/problemset/problem/766/B
Problem Tag:  constructive algorithms, geometry, greedy, math, number theory, sortings, *1000 
Codeforces ID: arpit_26  */


#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
#define pb push_back
#define pob pop_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define in insert
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
typedef long long ll;
void solve(){
    long long n; cin>>n;
    long long a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-2;i++){
        long long x=ceil((a[i]+a[i+1]+a[i+2])/(2*1.0)); 
        if(x>a[i+2]) {
            cout<<"YES"<<endl;
            return;
       }
    }
    cout<<"NO"<<endl;
}
int main(){

    int t=1;   //cin>>t;
    while(t--){
        solve();
    }
}
