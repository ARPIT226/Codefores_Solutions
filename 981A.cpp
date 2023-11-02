// Question Link: https://codeforces.com/contest/981/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;  cin>>s;
    int n = s.length();
    int flag = 0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i] != s[i+1]){
            flag = 1;
        }
    }
    
    if(flag==0){
        cout<<"0"<<endl;
        return 0;
    }
    else {
    string t = s;
    reverse(t.begin(),t.end());
    
    if(t==s){
        cout<<n-1<<endl;
    }
    else{
        cout<<n<<endl;
    }
    }

    return 0;
}
