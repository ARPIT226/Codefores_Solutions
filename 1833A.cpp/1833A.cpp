// Question Link: https://codeforces.com/problemset/problem/1833/A


#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;   cin>>n;
    string s;cin>>s;
    set<string>st;
    
    for(int i=0;i<n-1;i++){
        string t="";
        t+=s[i];
        t+=s[i+1];
        st.insert(t);
    }
    cout<<st.size()<<endl;
}

int main()
{
    int t;   cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
