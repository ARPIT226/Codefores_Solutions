/* Question link: https://codeforces.com/problemset/problem/1525/B
Tag:   constructive algorithms, greedy, *900
Codeforces ID: arpit_26 */


# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,mini=1e8,maxi=0;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    
    if(is_sorted(a,a+n)){
        cout<<"0"<<endl;
        return;
    }
    else if(a[0]==mini || a[n-1]==maxi){
        cout<<"1"<<endl;
        return;
    }
    else if(a[0]==maxi and a[n-1]==mini){
        cout<<"3"<<endl;
        return;
    }
    else if(a[0]!=mini and a[n-1]!=maxi){
        cout<<"2"<<endl;
        return;
    }
}

int main(){
    
    int t; cin>>t;
    while(t--){
        solve();
    }
}
