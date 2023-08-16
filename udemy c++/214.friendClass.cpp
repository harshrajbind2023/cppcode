// m-1 class function

#include<bits/stdc++.h>
using namespace std;

class your;
class my
{
private:
	int a;
protected:
	int b;
public:
	int c;
	friend your;
};
class your
{
public:
	my m;
	void fun()
	{
	     m.a=10;
	     m.b=10;
	     m.c=10;
	}
};




//  m-2   friend function
# include<iostream>
using namespace std;
    
/*program for friend function

*/
class test
{
private:
	int a;
protected:
	int b;
public:
	int c;
	friend void fun();
};
void fun()
{
	test t;
	t.a=10;
	t.b=15;
	t.c=9;
}