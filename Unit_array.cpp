#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int neg = 0;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            if (x == -1) ++neg;
        }
        int pos = n - neg;

        int need = max(0, neg - pos);            // amount of deficit in sum (how many total -1 must be flipped in net terms)
        int k = (need + 1) / 2;                  // ceil(need/2)

        // adjust to satisfy parity: we need (neg - k) even -> k % 2 == neg % 2
        if ((k % 2) != (neg % 2)) ++k;

        cout << k << '\n';
    }
    return 0;
}
