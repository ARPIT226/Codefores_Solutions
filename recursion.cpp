/* Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S
Codeforces ID: arpit_26 */

#include <bits/stdc++.h>
using namespace std;

double average(int a[], int n, int i, int sum, int count) {
    if (i == n){           // base case
        return static_cast<double>(sum) / count;
    }
    
    return average(a, n, i+1, sum+a[i], count+1);   //magical assumption
}

int main() {
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long double avg = average(a, n, 0, 0, 0);
    
    printf("%0.6f",avg);
    
    return 0;
}
