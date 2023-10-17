/* Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
Codeforces ID: arpit_26 */


# include <bits/stdc++.h>
using namespace std;

int count_vowels(string s,int i,int cnt){
    if(i<0){            //base case
        return cnt;
    }
    else{

        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
            cnt++;
        }
        int a=count_vowels(s,i-1,cnt);   // magical assumption
        return a;
    }
}
int main(){
        string s;
        getline(cin,s);  // for space separated integers
        int n=s.length();
        int i=n-1,cnt=0;
        cout<<count_vowels(s,i,cnt);
        
}
