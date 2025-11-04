#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Alice starts first.
        // If c is even → equal turns.
        // If c is odd  → Alice gets one extra turn.

        if ((a + (c % 2)) > b)
            cout << "First" << endl;   // Alice wins
        else
            cout << "Second" << endl;  // Bob wins
    }
    return 0;
}
