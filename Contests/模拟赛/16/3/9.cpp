#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) {
        cin >> x;
    }

    int ans = 0, mx = -1;
    for (auto x : a) {
        if (x > mx) {
            ans += 1;
        }
        mx = max(mx, x);
    }

    cout << ans << '\n';

    return 0;
}