#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        int maxi=0;
        int last=0;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        a.push_back(x);
        a.insert(a.begin(), 0);
        for(int i=0;i<a.size()-1;i++){
            maxi=max(maxi, a[i+1]-a[i]);
        }
        last=2*(a[a.size()-1]-a[a.size()-2]);
        maxi=max(maxi, last);
        cout<<maxi<<endl;
}
return 0;
}