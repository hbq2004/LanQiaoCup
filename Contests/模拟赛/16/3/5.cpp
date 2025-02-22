#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 2024;

    int cnt = 0;
    for (int i = 1;; i++) {
        if (__gcd(i, n) == 1) {
            if (++cnt == 2024) {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}