//  m-1 run

#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , string>p;
    p=make_pair(1,"asdf");
    cout<<p.first<<"   "<<p.second;
    
}

//   m-2
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , string>p;
   p={1,"asdf"};
    cout<<p.first<<"   "<<p.second;
    
}

//  m-3
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , string>p;
    p={1,"asdf"};
    cout<<p.first<<"   "<<p.second<<endl;
    p.first=5;

    cout<<p.first<<"   "<<p.second;
    
}


//    m-4
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p[3];
    p[0] = {1, 1};
    p[1] = {2, 4};
    p[2] = {3, 9};
    for (int i = 0; i <= 2; i++)
    {
        cout << p[i].first << "   " << p[i].second << endl;
    }
}


