#include <bits/stdc++.h>
using namespace std;
class base
{
public:
	void fun1()
	{
		cout<<"fun1 of base"<<endl;
	}
};
class derived: public base
{
public:
	void fun2()
	{
		cout<<"fun2 of derived"<<endl;
	}
};
int main()
{
	derived d;
	base *ptr=&d;
	ptr->fun1();
	ptr->fun2();
	return 0;
}



// M-2 

#include <bits/stdc++.h>
using namespace std;
class rectangle
{
public:
	void area()
	{
		cout<<"area of rectangle"<<endl;
	}
};
class cuboid:public rectangle
{
public:
	void volume()
	{
		cout<<"cuboid volume"<<endl;
	}
};
int main()
{
	rectangle r;
	cuboid *q=&r;
	cuboid c;
	c.area();
	c.volume();
	p->area();
	p->volume();		      
	return 0;
}




//  M-3
#include<bits/stdc++.h>
using namespace std;
    

class rectangle
{
public:
	void area()
	{
		cout<<"area of rectangle"<<endl;
	}
};
class cuboid:public rectangle
{
public:
	void volume()
	{
		cout<<"cuboid volume"<<endl;
	}
};
int main()
{
	rectangle r;
	 cuboid *p;
	cuboid c;
	c.area();
	c.volume();
    cout<<endl;
	 p->area();
	p->volume();		      
	return 0;
}




//  m-4
# include<iostream>
using namespace std;

class basicCar
{
public:
	void start()
	{
		cout<<"car started"<<endl;
	}
};
class advanceCar:public basicCar
{
public:
	void playmusic()
	{
		cout<<"playing music"<<endl;
	}
};
int main()
{
	basicCar b;
	advanceCar *p=&b;
	advanceCar a;
	a.start();
	a.playmusic();
	basicCar *ptr=&a;
	ptr->start();
	ptr->playmusic();
}