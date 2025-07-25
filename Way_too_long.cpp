#include<iostream>
#include<string>
using namespace std;
int main(){
    int input;
    string str;

    cin >> input;
    for(int i=0;i<input;i++){
        cin>>str;
        if(str.length() <=10){
            cout<< str << endl;
        }
        else if(str.length()>10){
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl; 
             }

    }
    return 0;
}