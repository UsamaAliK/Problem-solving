#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0, sum=0;
    cin>>n;
    vector<int> coins(n);
    for(int i=0; i<n; i++){
        cin>>coins[i];
    }
    sort(coins.rbegin(), coins.rend());
    int total = accumulate(coins.begin(), coins.end(), 0);  // Step 2: total sum
    for(int i=0; i<n; i++){
        sum += coins[i];
        count++;
        if(sum > total - sum){
            cout<<count;
            return 0;
      
    }
}
}
    
