//program for using namespace
#include<bits/stdc++.h>
using namespace std;



namespace first
{
	void fun()
	{
		cout<<"first"<<endl;
	}
};
namespace second
{
	void fun()
	{
		cout<<"second"<<endl;
	}
};
using namespace first;
int main()
{
	second::fun();
	std::cout<<"kkk"<<endl;
}