#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a, xor_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            xor_sum ^= a; // XOR of all elements
        }

        if (n % 2 == 0) {
            if (xor_sum == 0)
                cout << 0 << "\n";
            else
                cout << -1 << "\n";
        } else {
            cout << xor_sum << "\n";
        }
    }
}
