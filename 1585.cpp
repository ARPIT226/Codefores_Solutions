/* Question link: https://codeforces.com/problemset/problem/1585/B
Tag: greedy, 900*
Codeforces ID: arpit_26 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int b;
		cin>>b;
		vector<int> m(b);
		for(int i=0;i<b;i++)
		{
			cin>>m[i];
		}
		int g=0;
		int f=m[b-1];
		for(int i=b-2;i>=0;i--)
		{
			if(m[i]>f)
			{
				f=m[i];
				g++;
			}
		}
		cout<<g<<endl;
	}
}

