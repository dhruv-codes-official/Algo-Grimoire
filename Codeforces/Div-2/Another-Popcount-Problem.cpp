#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll ans = 0;

        for (ll cost = 1; cost <= n; cost <<= 1) {
            ll take = min(k, n / cost);
            ans += take;
            n -= take * cost;
        }

        cout << ans << '\n';
    }

    return 0;
}