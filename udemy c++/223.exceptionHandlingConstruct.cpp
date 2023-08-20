//  program for exception handling construct

#include<bits/stdc++.h>
using namespace std;
    

int main(){
	int x=10,y=2,z;
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
	cout<<"bye"<<endl;


}

	

