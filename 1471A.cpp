/* Question link: https://codeforces.com/problemset/problem/1471/A
Tag: greedy, math, number theory, *900
Codeforces ID: arpit_26 */


# include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,sum=0,sum2=0;
    cin>>n>>k;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        sum2+=(ceil(a[i]/(k*1.0)));
    }
    long long x=ceil(sum/(k*1.0));
    cout<<x<<" "<<sum2<<endl;
}

int main(){
    
    int t; cin>>t;
    while(t--){
        solve();
    }
}
