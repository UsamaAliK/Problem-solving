#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool found = false;
        for(int i = 0; i < n; i++){
            if(arr[i] == m){
                found = true;
                break;
            }
        }

        if(found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
