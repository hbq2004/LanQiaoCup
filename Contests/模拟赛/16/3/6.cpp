#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "ANQNANBNQNANQNQNBNINQNQNANQNINANQNANBNQNANQNQNBNBNQNQNANQNINANQNANBNQNANQNQNBNINQNQNANQNINBNQNANBNQN";

    int n = s.size();

    string ans;
    int mx = 0;
    for (int len = 1; len <= 10; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            string subs = s.substr(i, len);
            int cnt = 0;
            for (int j = 0; j + len - 1 < n; j++) {
                if (s.substr(j, len) == subs) {
                    cnt += 1;
                }
            }
            if (len * cnt > mx) {
                mx = len * cnt;
                ans = subs;
            } else if (len * cnt == mx && subs < ans) {
                ans = subs;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}