//    M-1

#include <bits/stdc++.h>
using namespace std;
class rectangle
{
public:
	int length;
	int breadth;
	int area()
	{
		return length*breadth;
	}
	int perimeter()
        {
		return 2*(length+breadth);
	}
};
int main()
{
	rectangle r1;
	r1.length=5;
	r1.breadth=10;
	cout<<"area is "<<r1.area()<<endl;
	cout<<"perimeter is "<<r1.perimeter()<<endl;
}