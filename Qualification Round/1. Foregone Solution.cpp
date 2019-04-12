#include <bits/stdc++.h> 
using namespace std; 

int convert(int num) 
{ 
	if (num == 0) 
		return 0; 

	int digit = num % 10; 
	if (digit == 4) 
		digit = 3; 

	return convert(num/10) * 10 + digit; 
} 


int compute(int num) 
{ 
	if (num == 4) 
	return 3; 
	else return convert(num); 
} 

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	long temp;
	temp = t;
	while(t!=0)
	{
		long n,a=0,b=0,i,j,sum=0,final = 0,val = 0,digit =0;
		vector<long> ind;
		cin >> n;
		final = n;
		long count=0;
		a = compute(n);  
		b = final - a;
	cout << "Case #" << temp-t+1 << ": " << a << " " << b << "\n";
	--t;
	}
}
