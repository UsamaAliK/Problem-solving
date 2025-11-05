#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b || c > a + (d - b)) {
            cout << -1 << "\n";
        } else {
            cout << (d - b) + (a + (d - b) - c) << "\n";
        }
    }
}
