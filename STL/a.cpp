#include <bits/stdc++.h>
using namespace std;

void printV(vector<pair<int,int>> vp){
       
    cout<<"size = "<<vp.size()<<endl;
    cout<<"print vector"<<endl;
    for(int i=0;i<vp.size();i++){

        cout<<vp[i].first<<"|"<<vp[i].second<<endl;
      
    }
}
int main()
{
    vector<pair<int,int>> vp;
    printV(vp);

    cout<< "push element"<<endl;
   
     int n;
     cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
       // vp.push_back(x.y);  wrong
      
       
    }
      printV(vp);
}