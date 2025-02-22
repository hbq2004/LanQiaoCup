#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    vector<int> e(n);
    for (auto &x : e) {
        cin >> x;
    }
    cin >> m;
    vector<int> v(m);
    for (auto &x : v) {
        cin >> x;
    }
    
    int ans = 0;
    for (int i = 0, j = 0; i < n && j < m; i++) {
        while (j < m && e[i] > v[j]) {
            j += 1;
        }
        if (j == m) {
            break;
        }
        ans += 1;
        j += 1;
    }

    cout << ans << '\n';

    return 0;
}