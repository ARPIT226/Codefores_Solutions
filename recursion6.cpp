/* Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G
Codeforces ID: arpit_26*/

# include <bits/stdc++.h>
using namespace std;

void print_spaces(int n){
    if(n>0){
        cout<<" ";
        print_spaces(n-1);
    }
}

void print_stars(int n){
    if(n>0){
        cout<<"*";
        print_stars(n-1);
    }
}

void print_pyramid(int n, int i){
    if(i<=n){
        print_spaces(n-i);
        print_stars(2*i-1);
        cout<<endl;
        print_pyramid(n,i+1);
    }
}

void solve(){
    int n; cin>>n;
    print_pyramid(n,1);
}

int main(){
    int t=1;   //cin>>t;
    while(t--){
        solve();
    }
}
