// Question Link: https://codeforces.com/problemset/problem/698/A

#include <iostream>
using namespace std;

int dp[3][100];

int main() {
    int n;
    cin >> n;
    int a;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        dp[0][i] = max(dp[0][i-1], max(dp[1][i-1], dp[2][i-1]));
        if(a == 1 || a == 3) {
            dp[1][i] = max(dp[0][i-1], dp[2][i-1])+1;
        }
        if(a == 2 || a == 3) {
            dp[2][i] = max(dp[0][i-1], dp[1][i-1])+1;
        }
    }
    cout << n-max(dp[0][n], max(dp[1][n], dp[2][n]));
    return 0;
}
