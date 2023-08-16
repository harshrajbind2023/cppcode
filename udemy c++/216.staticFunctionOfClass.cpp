#include<bits/stdc++.h>
using namespace std;

class test
{
public:
     int a;
     static int count;
     test()
     {
	   a=10;
           count++;
     }
     static int getcount()
     {
	   return count;
     }
};
int test::count=0;
int main()
{
	test t1,t2;
	cout<<test::getcount()<<endl;
	cout<<t1.getcount()<<endl;
}