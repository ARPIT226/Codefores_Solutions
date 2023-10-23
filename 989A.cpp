/* Question Link: https://codeforces.com/contest/989/problem/A
Problem Tags: implementation, strings, 900*
My Codeforces ID: arpit_26
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;   cin>>s;
    string s1("ABC"),s2("ACB"),s3("BCA"),s4("BAC"),s5("CAB"),s6("CBA");
    
    size_t found;
    
	found = s.find(s1);
	if (found!=std::string::npos){
			cout<<"Yes";
			return 0;
    }
	    
	found = s.find(s2);
	if (found!=std::string::npos){
			cout<<"Yes";
			return 0;
    }
    
	found = s.find(s3);
	if (found!=std::string::npos){
		cout<<"Yes";
		return 0;
	}
		
	found = s.find(s4);
	if (found!=std::string::npos){
	    cout<<"Yes";
	    return 0;
	}
		
	found = s.find(s5);
	if (found!=std::string::npos){
		cout<<"Yes";
		return 0;
	}
		   
	found = s.find(s6);
	if (found!=std::string::npos){
		cout<<"Yes";
		return 0;
	}
	
	cout<<"No"; 
    return 0;
}
