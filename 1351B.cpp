// Question Link: https://codeforces.com/problemset/problem/1351/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;   cin>>t;
    while(t--){
    int a1,b1,a2,b2;   cin>>a1>>b1>>a2>>b2;
    if(max(a1,b1)==max(a2,b2) and min(a1,b1)+min(a2,b2)==max(a1,b1)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    
    return 0;
}
