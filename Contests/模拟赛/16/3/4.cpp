#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2024;; i--) {
        bool flg = true;
        int t = i;
        for (int j = 2; j * j <= t; j++) {
            if (t % j == 0) {
                flg = false;
                break;
            }
        }
        if (flg) {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}