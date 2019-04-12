#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,temp;
	cin >> t;
	temp=t;
	while(t!=0)
	{
		long int n,i;
		string s;
		cin >> n;
		cin >> s;
		cout << "Case #" << temp-t+1 << ": ";
		for(i=0;i<s.length();i++)
		{
			if(s[i] == 'E')
			{
				cout << 'S';	
			}
			else
			{
				cout << 'E';
			}
		}
		cout << '\n';
		--t;
	}
	return 0;
}
