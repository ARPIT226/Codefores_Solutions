/* Question link: https://codeforces.com/problemset/problem/768/A
Tag: constructive algorithms, sortings, 900*
Codeforces ID: arpit_26 */


#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,cnt=0; cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]==v[0] || v[i]==v[n-1]) cnt++;
    }
    cout<<n-cnt<<endl;
   
}
 
int main()
{
    int t=1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
}
