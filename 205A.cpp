/* Question Link:  https://codeforces.com/problemset/problem/205/A
Question Tag:  brute force, implementation, 900*   
Codeforces ID: arpit_26 */


#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
#define pb push_back
#define pob pop_back
#define endl "\n"
#define all(v) v.begin(),v.end()
#define mp make_pair
#define in insert
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
typedef long long ll;

void solve(){
    long long n,min=INT_MAX,cnt=0;  cin>>n;
    map <long long int,long long int> m;
    int pos=0;
    
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x<min){
            min=x;
            pos=i;
        }
        m[x]++;
    }
    if(m[min]>1){
        cout<<"Still Rozdil"<<endl;
    }
    else cout<<pos+1<<endl;
    
}

int main(){
    int t=1;      //cin>>t;
    while(t--){
        solve();
    }
}
