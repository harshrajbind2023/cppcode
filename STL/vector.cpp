//   m-1 run
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"number of element  ";
    int n;
    cin>>n;
    cout<<" push in vector";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }


    cout<<"size = "<<v.size()<<endl;
    cout<<"print vector";
    for(int i=0;i<n;i++){

        cout<<v[i]<<" ";
    }
}



//  m-1
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(10);
    v.push_back(24);
    cout<<"size = "<<v.size()<<endl;
    cout<<"print vector"<<endl;
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" "<<endl;
    }

}




//  m-1
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(10);
    
    cout<<"size = "<<v.size()<<endl;
    cout<<"print vector"<<endl;
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" "<<endl;
    }

}


//    m-1
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(10,18);
    v.push_back(24);
    cout<<"size = "<<v.size()<<endl;
    cout<<"print vector"<<endl;
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" "<<endl;
    }

}


//  m-1
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(2,18);

    vector<int> v1=v;
    v1.push_back(24);

    cout<<"size = "<<v1.size()<<endl;
    cout<<"print vector"<<endl;
    for(int i=0;i<v1.size();i++){

        cout<<v1[i]<<" "<<endl;
    }
}

//  m-2   function is  declare , call and define  in vector
#include <bits/stdc++.h>
using namespace std;

void printV(vector<int>v);
int main()
{
    vector<int>v;
    cout<<"number of element  ";
    int n;
    cin>>n;
    cout<<" push in vector";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printV(v);

}

void printV(vector<int>v){
       
    cout<<"size = "<<v.size()<<endl;
    cout<<"print vector";
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }
}



//  m-3  
#include <bits/stdc++.h>
using namespace std;

void printV(vector<int>v);
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    printV(v);
    
    v.push_back(3);
    v.push_back(4);
    printV(v);

    v.pop_back();
     printV(v);

}
void printV(vector<int>v){
       
    cout<<"size = "<<v.size()<<endl;
    cout<<"print vector"<<endl;
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" "<<endl;
    }
}



//   m-4
#include <bits/stdc++.h>
using namespace std;

void printV(vector<int>v){
       
    cout<<"size = "<<v.size()<<endl;
    cout<<"print vector"<<endl;
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" "<<endl;
    }
}
int main()
{
    vector<int> v(2,18);
    printV(v);

    vector<int> v1=v;
    v1.push_back(24);
     printV(v1);

      printV(v);
    
}



//  m-5
#include <bits/stdc++.h>
using namespace std;

void printV(vector<int>v){
       
    cout<<"size = "<<v.size()<<endl;
    cout<<"print vector"<<endl;
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" "<<endl;
    }
}
int main()
{
    vector<int> v(2,18);
    printV(v);

    vector<int> &v1=v;
    v1.push_back(24);
     printV(v1);

      printV(v);
    
}



