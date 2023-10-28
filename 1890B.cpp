// Question Link: https://codeforces.com/contest/1890/problem/B

#include <bits/stdc++.h>
using namespace std;
# define ll long long

bool check(string s1){
    for(ll i=0;i<s1.size()-1;i++){
        if(s1[i]==s1[i+1]){
            return 0;
        }
    }
    return 1;
}

void solving(){
    
    ll n,m;     cin>>n>>m;
    string s,t;   cin>>s>>t;
    if(check(s)){
        cout<<"YES"<<endl;
        return;
    }
    if(!check(t)){
        cout<<"NO"<<endl;return;
    }
    for(ll i=0;i<n;i++){
        if(s[i]==s[i+1]){
            if(s[i]==t[0] || s[i+1]==t[t.size()-1]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}


int main()
{
    int t;   cin>>t;
    while(t--){
        solving();
    }

    return 0;
}
