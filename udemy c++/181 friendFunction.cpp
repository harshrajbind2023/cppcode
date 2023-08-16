    
//program for operator overloading using friend functions


class complex
{
private:
	int real;
	int img;
public:
	complex(int r=0,i=0)
	{
		real=r;
	      	img=i;
	}
	void display()
	{
		cout<<real<<"+i"<<img;
	}
	friend complex opreator+(complex c1,complex c2);
};       
complex operator+(complex c1,complex c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+v2.img;
	return temp;
}
int main()
{
	complex c1(5,3),c2(10,5),c3;
	c3=c1+c2;
	c3.display();
}





//  m-2
//program for operator overloading using friend functions


class complex
{
private:
	int real;
	int img;
public:
	complex(int r=0,i=0)
	{
	      real=r;
	      img=i;
	}
	void display()
	{
		cout<<real<<"+i"<<img<<endl;
	}
	friend ostream & operator<<(ostream &out,complex &c);
};
ostream & operator<<(ostream &out,complex &c)
{
	out<<c.real<<"+i"<<c.img<<endl;
	return out;
}
int main()
{
	complex c(10,5);
	cout<<c;
	operator<<(cout,c);
}