/* Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
Codeforces ID: arpit_26 */


# include <bits/stdc++.h>
using namespace std;

bool palindrome(int a[],int begin,int end){
    if(begin>=end){     //base case
        return true; 
    }
    if(a[begin]==a[end]){
        return palindrome(a,begin+1,end-1);    //magical assumption
    }
    else return false;
}

int main(){
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    palindrome(a,0,n-1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
