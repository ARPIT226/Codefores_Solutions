// Question Link: https://codeforces.com/contest/1890/problem/A

#include <bits/stdc++.h>
using namespace std;
# define ll long long

void solve(){
    int n;  cin>>n;
    vector<int> a(n);
    map<int,int> m;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    
    if(m.size()>2){
        cout<<"NO"<<endl;
        return;
    }
    
    else if(n==2 or m.size()==1){
        cout<<"YES"<<endl;
        return;
    }
    else if(m.size()==2){
        sort(a.begin(),a.end());
        int flag=0, x=1,y=1;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1] and flag==0){
                x++;
            }
            else if(a[i]!=a[i+1]){
                flag=1;
            }
            else if(a[i]==a[i+1] and flag==1){
                y++;
            }
            
        }
        if(abs(x-y)<=1){
            cout<<"YES"<<endl;
            return;
        }
        else cout<<"NO"<<endl;
        return;
    }
    
}

int main()
{
    int t;   cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
