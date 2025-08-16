#include<iostream>
#include<vector>        
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        bool has_triple=false;
        cin>>n;
        int count = 0;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            if (s[i]=='.'&& s[i+1]=='.' && s[i+2]=='.'){
                has_triple=true;
                break; 
            }
            if(s[i]=='.'){
                count++;
            }
        }
        if(has_triple){
            cout<<2<<endl;

        }
        else{
            cout<<count<<endl;
        }
        }
        return 0;
    }
