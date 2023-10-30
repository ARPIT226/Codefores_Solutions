// Question Link: https://codeforces.com/contest/1891/problem/A 


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,first; cin>>n>>first;
    int temp,flag=0;
    for(int i=1; i<n; i++){
        cin>>temp;
        if(first>temp){
            if(((i-1)&(i))!=0) flag=1;
        }
        first=temp;
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main()
{
    int t; cin>>t; 
    while(t--) solve();
	return 0;
}
