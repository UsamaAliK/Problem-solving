#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,countTwo=0,countCurTwo=0,ans=-1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2){
                countTwo++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                countCurTwo++;
            }
            if(countCurTwo==(countTwo-countCurTwo)){
                ans=i+1;
                break;
            }       
    }
    cout<<ans<<"\n";
    }
    
   

}