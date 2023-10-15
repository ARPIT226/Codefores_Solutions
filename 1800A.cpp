/* Question link: https://codeforces.com/contest/1800/problem/A
Tag: implementation, strings, 800*
Codeforces ID: arpit_26 */

# include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k=0; cin>>n;
    string s; cin>>s;
    transform(s.begin(),s.end(),s.begin(), :: tolower);
    if((s[0]!='m') or (s[n-1]!='w')){
        cout<<"NO"<<endl;
        return;
    }
    else {
        string t="";
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]) t=t+s[i];
        }
        if((t=="meo") and (s[n-1]=='w')){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
