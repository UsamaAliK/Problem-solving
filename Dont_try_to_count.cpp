#include<iostream>
#include<string>   
using namespace std;



int main() {

    int t;

    cin >> t;

    while (t--) {

        int n;

        cin>>n;

        int m;

        cin>>m;

        string x,s;

        cin>>x;

        cin>>s;

        int count = 0;

        int rao = 10;

        bool found = false;

        while(rao--){

            if(x.find(s) != string::npos){

                 found = true;

                 break;

            }

            x = x + x;

            count++;

        }

        if(found==true){

            cout<<count<<endl;

        }else{

            cout<<"-1"<<endl;

        }

        

        

    }

    return 0;

}

