/* Question Link: https://codeforces.com/contest/1374/problem/C
Question Tag: greedy, strings, 1000*
Codeforces ID: arpit_26*/


#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
#define pb push_back
#define pob pop_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define in insert
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
typedef long long ll;
/*------------------------------------------------------------------------------*/
void solve(){
    int n,cnt=0;  cin>>n;
    string s;  cin>>s;
    stack <char> st;

    for(auto i:s){
        if(i=='('){
            st.push(i);
        }
        else if(i==')' and !st.empty()){
            st.pop();
        }
    }
    cout<<st.size()<<endl;
}
int main(){
int t;   cin>>t;
    while(t--){
       solve();
    }
}
