// Question Link: https://codeforces.com/contest/1406/problem/A


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin>>n;
    vector<int> v(n);
    vector<int> t(101,0);
    for(int i=0; i<n; i++){
        cin>>v[i];
        t[v[i]]++;
    }
    
    int a = -1;
    int b = -1;
    
    while(t[a+1]>0){
        a++;
    }
    
    while(t[b+1]>1){
        b++;
    }
    
    cout<<a+b+2<<endl;
}

int main()
{
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
