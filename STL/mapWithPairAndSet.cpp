//     m-1 run
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<pair<int,int>,int> mp;
    pair<int,int> p1,p2;
    p1={1,1};
    p2={2,4};
     cout<<(p1>p2)<<endl;
     cout<<(p1<p2);
}


//    m-2
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<set<int>,int>  m;
    set<int> s1={1,2,3};
    set<int> s2={2,3,4};
    cout<<(s1>s2)<<endl;
    cout<<(s1<s2)<<endl;

}


//     m-3   wrong
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<pair<string,string>,vector<int>> mpv;
    set<pair<int,int>> sp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            mpv[{fn,ln}].push_back(x);
        }
    }

    for(auto value:mpv){
        auto &full_name=value.first;
        auto &list=value.second;
        for(auto element:list){
            cout<<element<<" ";
        }
        cout<<endl;
        
    }
}
