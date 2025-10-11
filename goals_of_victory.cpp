#include<iostream>
#include<string>
using namespace std;
#include<vector>

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int sum=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        for (int i = 0; i<arr.size(); i++)
        {
            
            sum+=arr[i];
        }
        cout<<(-1)*sum<<endl;
        
    }
    return 0;
}