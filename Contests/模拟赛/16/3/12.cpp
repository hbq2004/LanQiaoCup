#include <bits/stdc++.h>
using namespace std;

constexpr int inf = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> L(n, vector<int>(m)), R(n, vector<int>(m)), U(n, vector<int>(m)), D(n, vector<int>(m));

    // 预处理: s = max(s, 0) + w
    for (int i = 0; i < n; i++) {
        int s = -inf;
        for (int j = 0; j < m; j++) {
            s = max(s, 0) + a[i][j];
            L[i][j] = s;
        }
    }

    for (int i = 0; i < n; i++) {
        int s = -inf;
        for (int j = m - 1; j >= 0; j--) {
            s = max(s, 0) + a[i][j];
            R[i][j] = s;
        }
    }


    for (int i = 0; i < m; i++) {
        int s = -inf;
        for (int j = 0; j < n; j++) {
            s = max(s, 0) + a[j][i];
            U[j][i] = s;
        }
    }

    for (int i = 0; i < m; i++) {
        int s = -inf;
        for (int j = n - 1; j >= 0; j--) {
            s = max(s, 0) + a[j][i];
            D[j][i] = s;
        }
    }

    // 枚举十字中心点
    int ans = -inf;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans = max(ans, L[i][j] + R[i][j] + U[i][j] + D[i][j] - 3 * a[i][j]);
        }
    }

    cout << ans << '\n';

    return 0;
}