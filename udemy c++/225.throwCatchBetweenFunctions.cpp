//program for throw and catch between function
#include<bits/stdc++.h>
using namespace std;
    
int division(int a,int b)
{
	if(b==0)
		throw 1;
	return a/b;
}	
int main()
{
	int x=10,y=0,z;
	try
	{
		if(y==0)
			throw 1;
		z=x/y;
		cout<<z<<endl;
	}
	catch(int e)
	{
		cout<<"division by zero"<<e<<endl;
	}
	
}

	