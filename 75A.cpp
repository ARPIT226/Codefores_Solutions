Problem Link: https://codeforces.com/contest/75/problem/A
Problem Name: A. Life Without Zeros
Problem Tags: implementation,(1000*)
My codeforces ID: arpit_26


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    
    string a,b;   cin>>a>>b;
    ll a1=stoi(a), b1=stoi(b);
    ll c=a1+b1;
    string c1=to_string(c);
    
    a.erase(remove(a.begin(), a.end(), '0'), a.end());
    b.erase(remove(b.begin(), b.end(), '0'), b.end());
    c1.erase(remove(c1.begin(), c1.end(), '0'), c1.end());
    ll c2 = stoi(c1);
    
    
    ll a2=stoi(a);
    ll b2=stoi(b);
    
    if(a2 + b2 == c2){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    
    // cout<<c1<<endl;
    
    return 0;
}  
