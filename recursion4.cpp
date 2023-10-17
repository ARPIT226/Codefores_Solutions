/* Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L
Codeforces ID: arpit_26 */

# include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll summation(ll arr[], ll n) {
    if (n == 0) {              // base case
        return 0;
    } else {
        return arr[n-1] + summation(arr,n-1);     // magical assumption
    }
}

int main(){
        ll n;  cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<summation(a,n)<<endl;
        return 0;    
}
