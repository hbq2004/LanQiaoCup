#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 24;

    cout << (1 << 24) << '\n';

    int ans = 0;
    for (int i = 0; i < 1 << n; i++) {
        int cnt[2] {};
        for (int j = 0; j < 5; j++) { // 0 .. 4
            cnt[i >> j & 1] += 1;
        }
        if (cnt[1] > 3) {
            continue;
        }
        bool ok = true;
        for (int j = 5; j < n; j++) {
            cnt[i >> (j - 5) & 1] -= 1;
            cnt[i >> j & 1] += 1;
            if (cnt[1] > 3) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            continue;
        } else {
            ans += 1;
        }
    }

    cout << ans << '\n';

    return 0;
}