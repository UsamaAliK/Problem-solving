#include<iostream>
using namespace std;
int main(){
    int num ,a,b,c,count=0;
    cin >> num;
    for(int i=0;i<num;i++){
        cin>>a>>b>>c;

        if (a==1 && b==1 && c==1){
            count++;
        }
        if( a==1 && b==1 && c==0){
            count++;
        }
        if( a==1 && b==0 && c==1){
            count++;
        }
        if( a==0 && b==1 && c==1){
            count++;
        }
    }
    cout << count << endl;
return 0;
}