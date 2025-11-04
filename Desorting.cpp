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
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // If already not sorted → 0 operations
        bool already_not_sorted = false;
        for (int i = 1; i < n; ++i) {
            if (a[i] < a[i-1]) {
                already_not_sorted = true;
                break;
            }
        }
        if (already_not_sorted) {
            cout << 0 << '\n';
            continue;
        }

        // Find minimum adjacent difference
        long long min_diff = LLONG_MAX;
        for (int i = 1; i < n; ++i) {
            min_diff = min(min_diff, a[i] - a[i-1]);
        }

        // minimal operations = floor(min_diff/2) + 1
        long long result = (min_diff / 2) + 1;
        cout << result << '\n';
    }

    return 0;
}
