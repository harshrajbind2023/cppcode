//   m-1
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v={1,2,3,4,5,6};

  vector<int> ::iterator it=v.begin();
  cout<<(*it);
}



//    m-2
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<pair<int,int>> vp={{1,1},{2,4},{3,9},{4,16}};
   vector<pair<int,int>> ::iterator it;
//    for(int i=vp.begin;i!=vp.end;i++)  wrong
   for(it=vp.begin();it!=vp.end();it++){
    cout<<(*it).first<<"  "<<(*it).second<<endl;
    //   OR

    cout<<it->first<<"  "<<it->second<<endl;

   }

}



//     m-3
