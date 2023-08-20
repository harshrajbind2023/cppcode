//program for all about throw
#include<bits/stdc++.h>
using namespace std;
    
class myexception: exception
{
};
int division(int a,int b)throw(myexception)
{
	if(b==0)
		throw myexception();
	return a/b;
}
int main()
{
	int x=10,y=2,z;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
	}
	catch(myexception e)
	{
		cout<<"division by zero"<<endl;
	}
	cout<<"bye"<<endl;
}


// //     m- 2  error
// //program for all about catch
// #include<bits/stdc++.h>
// using namespace std;


// class myexception1: exception
// {
// };
// class myexception2:public my exception1
// {
// };
// int main()
// {
// 	try
// 	{
// 		throw myexception1();
// 	}
// 	catch(myexception2 e)
// 	{
// 		cout<<"int catch"<<endl;
// 	}
// 	catch(myexception1 e)
// 	{
// 		cout<<double catch"<<endl;
// 	}
// 	catch(...)
// 	{
// 		cout<<all catch<<endl;
// 	}
// }