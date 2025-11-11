#include<iostream>
#include <numeric> 
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        bool flag=false;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(std::gcd(arr[i],arr[j])<=2){
                    flag=true;
                    break;
                    
                }
            }
        }
        if(flag==true)cout<<"YES\n";
        else cout<<"NO\n";
    
    }
    return 0;
}