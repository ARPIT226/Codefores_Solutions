/* Question Link: https://codeforces.com/contest/1451/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<(n<=3?(n-1):2+(n&1))<<endl;
    }
    return 0;
}
