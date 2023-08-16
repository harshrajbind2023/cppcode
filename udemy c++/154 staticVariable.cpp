#include <bits/stdc++.h>
using namespace std;
int x=10;
void fun()
{
	static int s=10;
	s++;
	cout<<s<<endl;
}
int main()
{
	fun();
	fun();
}

// 11
// 12
