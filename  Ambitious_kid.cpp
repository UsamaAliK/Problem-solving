#include <iostream>
#include <vector>
#include <cstdlib>  // for abs()
#include <climits>  // for INT_MAX
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        ans = min(ans, abs(a[i]));
    }

    cout << ans << endl;
    return 0;
}
