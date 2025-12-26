#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=0;
        int mini=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        maxi=arr[n-1];
        mini=arr[0];
        if(maxi==mini){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            cout<<maxi;
            for(int i=0;i<n-1;i++){
                cout<<" "<<arr[i]<<"\n";
            }
        }


    }
}