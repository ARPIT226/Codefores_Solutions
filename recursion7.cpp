/* Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
Codeforces ID: arpit_26 */

# include <bits/stdc++.h>
using namespace std; 

void even_index(int a[],int size, int index){
    if(index<0){      // base case
        return;
    }
    if(index%2==0){
        cout<<a[index]<<" ";
    }
    even_index(a,size,index-1);      // magical assumption
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    even_index(a,n,n-1); // (n-1) is the index of the last element
    return 0;
}
