#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        map<int,int>freq;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        if(freq.size()==1){
            cout<<"YES"<<endl;
        }
        else if(freq.size()>2){
            cout<<"NO"<<endl;
        }
        else{
            auto it=freq.begin();
            int first=it->second;
            it++;
            int second=it->second;
            if(abs(first-second)<=1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    
 

        }
    }
}