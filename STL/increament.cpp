//  m-1   not increament

#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v={1,2,3,4,5,6};
  for(int value:v){
   value++;
  }
  for(int value:v){
   cout<<value<<" ";
  }

}



//    m-2  increament

#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v={1,2,3,4,5,6};
  for(int &value:v){
   value++;
  }
  for(int value:v){
   cout<<value<<" ";
  }

}