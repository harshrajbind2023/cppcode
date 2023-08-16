//  M-1 run
#include<bits/stdc++.h>
using namespace std;

class base
{
public:
	virtual void fun()
	{
		cout<<"fun of base"<<endl;
	}
};
class derived:public base
{
public:
	void fun()
	{
		cout<<"fun of derived"<<endl;
	}
};
int main()
{
	derived d;
	d.fun();
	base *ptr=&d;
	ptr->fun();
}



//  M-2   run
#include<bits/stdc++.h>
using namespace std;

class basicCar
{
public:
	virtual void start()
	{
		cout<<"basic car started"<<endl;
	}
};
class advanceCar:public basicCar
{
public:
	void start()
	{
		cout<<"advance car started"<<endl;
	}
};
int main()
{
	basicCar *p=new advanceCar();
	p->start();
}