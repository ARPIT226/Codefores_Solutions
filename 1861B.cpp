/* Question Link: https://codeforces.com/contest/1861/problem/B
Question Tag:  constructive algorithms dp greedy *1000
Codeforces ID: arpit_26 */


#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a,b;  cin>>a>>b;
    int n = a.length();
    int flag = 0;
    
    for(int i=0;i<n-1;i++){
        if(a[i] == b[i] && a[i] == '0' && a[i + 1] == b[i + 1] && a[i + 1] == '1'){
            flag=1;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

int main(){
    
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
