#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    // Input
    int x, y;
    cin >> x >> y;

    // Logic & Output
    // Since x == y means x % y == 0, we can compress this into a single condition.
    if (x % y == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n"; // Added the missing newline to prevent output merging
    }
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}