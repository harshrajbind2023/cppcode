//  M-1 wrong
#include<bits/stdc++.h>
using namespace std;

class car
{
public:
	virtual void start()=0;
};
class innova:public car
{
public:
	void start()
	{
		cout<<"innova started"<<endl;
	}
};
class swift:public car
{
public:
	void start()
        {
		cout<<"swift started"<<endl;
	}
};
int main()
{
	//car c;
	car *p=new innova();
	p->start();
	car *ptr=new swift();
	ptr->start();
}