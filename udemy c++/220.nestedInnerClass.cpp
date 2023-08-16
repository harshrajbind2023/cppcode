//   m-1 error

#include<bits/stdc++.h>
using namespace std;

class outer
{
	class inner;
  public:
	void fun()
	{
		i.display();
	}
	class inner
	{
	public:
		void display()
		{
			cout<<"display of inner"<<endl;
		}
	};
	inner i;
};
int main()
{
	outer::inner i;
}



//