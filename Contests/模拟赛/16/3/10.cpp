#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> strs(4);
    string ans;
    for (auto &s : strs) {
        cin >> s;
        ans += s;
    }

    vector<int> p(4);
    iota(p.begin(), p.end(), 0);

    do {
        string temp;
        for (auto x : p) {
            temp += strs[x];
        }
        if (temp < ans) {
            ans = temp;
        }
    } while (next_permutation(p.begin(), p.end()));

    cout << ans << '\n';

    return 0;
}