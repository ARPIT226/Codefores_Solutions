Problem Link: https://codeforces.com/contest/1881/problem/A
Problem Name: A. Don't Try to Count
Problem Tags: implementation, strings, (900*)
My codeforces ID: arpit_26

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;  cin>>n>>m;
    string s,t;   cin>>s>>t;
    int cnt=0,flag=0;
    for(int i=0;i<10;i++){
        if(s.find(t)== string::npos){
            s+=s;
            cnt++;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<cnt<<endl;
    }
    else cout<<"-1"<<endl;
    
}

int main()
{
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
