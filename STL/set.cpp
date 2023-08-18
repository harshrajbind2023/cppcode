//   m-1    run
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    s.insert("jkl");
for(auto str:s){
    cout<<str<<endl;
}

}



//   m-2 run
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    s.insert("jkl");

    auto it=s.find( "abc");
    if(it!=s.end()){
        cout<<(*it)<<endl;
    }

    auto it1=s.find( "abcd");
    if(it1!=s.end()){
        cout<<(*it1);
    }
    else{
        cout<<"abcd not find";
    }


     s.erase("abc");
    auto it2=s.find( "abc");
    if(it2!=s.end()){
        cout<<(*it2);
    }
    else{
        cout<<"abc not find";
    }


}


//    m-3  run
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }

    cout<<" print set"<<endl;
    for(auto value:s){
        cout<<value<<endl;
    }

}




//     m-4   run
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    int n;
    cout<<"insert element in set "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
   
    cout<<"element is prasent or not"<<endl;
    cout<<"check no of element"<<endl;
     cin>>q;
    while(q--){
        string s1;
        cin>>s1;
        if(s.find(s1)!=s.end()){
            cout<<"yes"<<endl;
            
        }
        else{
            cout<<"no"<<endl;
        }
    }

  
}



//     m-4  run
