#include <bits/stdc++.h>
using namespace std;

int maxim(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}
int main()
{
	int a,b,c,d;
	cout<<"enter 3nos"<<endl;
	cin>>a>>b>>c;
	d=maxim(a,b,c);
	cout<<"maximum no is"<<d;
	return 0;
}