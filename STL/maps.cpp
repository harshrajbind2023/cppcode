//    m-1 wrong
#include<bits/stdc++.h>
using namespace std;

// int main(){
//    map<int,string> m;
//    m[1]="acbd";
//    m[2]="efgh";
//    m[3]="ijkl";
//    m[4]="mnop";
//    for(int i=m.begin();i!=m.end();i++){
//       cout<<m.first<<" "<<m.second<<endl;
//    }
// }




//     m-2  run
#include<bits/stdc++.h>
using namespace std;

int main(){
   map<int,string> m;
   m[1]="acbd";
   m[2]="efgh";
   m[3]="ijkl";
   m[4]="mnop";
  
   // for(auto value:m){    wrong
   //    cout<<value;
   // }

     for(auto value:m){
      cout<<value.first<<"    "<<value.second<<endl;
   }

}



//   m-3  run order depend on key 
#include<bits/stdc++.h>
using namespace std;

int main(){
   map<int,string> m;
   m[1]="acbd";
   m[2]="efgh";
   m[3]="ijkl";
   m[4]="mnop";
   m[6]="uvwx";
   m.insert({5, "qrst"});
 
     for(auto value:m){
      cout<<value.first<<"    "<<value.second<<endl;
   }

}


//    m-4    run
#include<bits/stdc++.h>
using namespace std;

int main(){
   map<int,string> m;
   m[1]="acbd";
   m[2]="efgh";
   m[3]="ijkl";
   m[4]="mnop";
   m[5]="uvwx";

   auto value=m.find(3);
   if(value==m.end()){
      cout<<"not value"<<endl;
   }
   else{
       //cout<<value.first<<"    "<<value.second<<endl;   wrong
      cout<<(*value).first<<"    "<<(*value).second<<endl;

   }

   m.erase(5);
   auto value1=m.find(5);
    if(value1==m.end()){
      cout<<"not value"<<endl;
   }
   else{
      cout<<(*value1).first<<"    "<<(*value1).second<<endl;
   }


   m.clear();
   for(auto value:m){
      cout<<value.first<<"    "<<value.second<<endl;
   }
   cout <<" not have value";





}




//  m-5  run          string

#include<bits/stdc++.h>
using namespace std;

int main(){
   map<string,int> m;
   // m[acbd]=1;  wrong
   // m[efgh]=4;

   int n;
   cin>>n;
   for(int i=0;i<n;i++){
      string s;
      cin>>s;
      m[s]++;
   }
   for(auto value:m){
      cout<<value.first<<"    "<<value.second<<endl;
   }

}



//  m-6
map<pair<int,int>,string> m;   //  find
