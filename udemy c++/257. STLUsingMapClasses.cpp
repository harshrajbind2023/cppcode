//program for stl using map class
#include<bits/stdc++.h>
using namespace std;
    

int main()
{
	map<int,string> m;
	m.insert(pair<int,string>(1,"harsh"));
	m.insert(pair<int,string>(2,"raj"));
	m.insert(pair<int,string>(3,"bind"));
	map<int,string>::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++)
	{
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	map<int,string>::iterator itr1;
	itr1=m.find(2);
	cout<<"value found is"<<endl;
	cout<<itr1->first<<" "<<itr1->second<<endl;
}