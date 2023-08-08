#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i, n;
	cout << "enter the number";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}





/*program for finding sum of the factors of a number*/

#include <iostream>
using namespace std;

int main()
{
	int i, n,sum=0;

	cout << "enter the number";
     cin>>n;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
	}
	cout << "sum of factors" << sum << endl;
	return 0;
}
