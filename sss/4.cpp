//single inheritence
class A{
   

  };
class B: public A {
    
  };
  




// multilevel inheritence
  class A{
   

  };
class B: public A {
    
  };
 class C: public B {
    
  };
   





// multiple inheritence

class A{
   

  };
class B: {
    
  };
 class C: public A , public B {
    
  };
   




// hierarchical inheritence

class A{
   

  };
class B: public A {
    
  };
 class C: public A {
    
  };
   











#include<bits/stdc++.h>
using namespace std;
class B;
class A{
    private:
       int a;
    public:
     
      void setValue(int y){a=y;}

  };
class B: public A {
     private:
       int b;
    public:
     
       void setData(int y){
          setValue(y);
       }
  
  };
void fun(A o1,B o2){
    cout<<"sum"<<o1.a+o2.b;
}

int main(){
    A obj1;
    A obj2;
    obj1.set(2);
    obj2.set(3);
    fun(obj1 , obj2);
}



class A{
   
    void fun1(){

    }
     void fun2(int x){
        
    }
  };
class B: public A {
     void fun1(){   //overriding
        
    } 
    void fun2(){  // over hidding
        
    }
  };
  
