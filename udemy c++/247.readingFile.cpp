//program for reading a file
#include<bits/stdc++.h>
using namespace std;
    


int main()
{
	ifstream ifs;
	ifs.open("my.txt");
	//if(ifs_open()){}     error
	cout<<"file is opened"<<endl;
	string name;
	int roll;
	string branch;
	ifs>>name>>roll>>branch;
	ifs.close();
	cout<<"name"<<name<<endl;
	cout<<"roll"<<roll<<endl;
	cout<<"branch"<<branch<<endl;
}