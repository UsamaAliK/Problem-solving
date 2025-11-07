#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int i = 0, j = n - 1;
        // Count how many matching pairs from both ends until they differ
        while (i < j && s[i] != s[j]) {
            i++;
            j--;
        }

        // The shortest possible starting string length = j - i + 1
        cout << (j - i + 1) << "\n";
    }
    return 0;
}
