#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        string x,s;
        cin>>n>>m;
        cin>>x>>s;
        string x0=x;
        string x1=x0+x0;
        string x2=x1+x1;
        string x3=x2+x2;
        string x4=x3+x3;
        string x5=x4+x4;
        if(s.find(x0)==string::npos || x0.find(s)==string::npos){
            cout<<0<<endl;
        }
        else if(s.find(x1)==string::npos || x1.find(s)==string::npos){
            cout<<1<<endl;
        }
        else if(s.find(x2)==string::npos || x2.find(s)==string::npos){
            cout<<2<<endl;
        }
        else if(s.find(x3)==string::npos || x3.find(s)==string::npos){
            cout<<3<<endl;
        }
        else if(s.find(x4)==string::npos || x4.find(s)==string::npos){
            cout<<4<<endl;
        }
        else if(s.find(x5)==string::npos || x5.find(s)==string::npos){
            cout<<5<<endl;
        }
        else{
            cout<<-1<<endl;
        }

     


    }
    return 0;
}