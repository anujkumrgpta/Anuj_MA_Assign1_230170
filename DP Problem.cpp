#include <iostream>
using namespace std;

using ll = long long;

ll lucky_value(ll l, ll r, ll k) {
    if (r - l + 1 < k) return 0; // Segment too small
    if ((r - l + 1) % 2 == 0) {
        // Even length — just split
        ll m = (l + r) / 2;
        return lucky_value(l, m, k) + lucky_value(m + 1, r, k);
    } else {
        // Odd length — add middle
        ll m = (l + r) / 2;
        return m + lucky_value(l, m - 1, k) + lucky_value(m + 1, r, k);
    }
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << lucky_value(1, n, k) << '\n';
    }
    return 0;
}
