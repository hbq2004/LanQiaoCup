#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 2024;

    vector<int> f;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            f.push_back(i);
        }
    }

    if (n > 1) {
        f.push_back(n);
    }

    sort(f.begin(), f.end());

    int sum = 0;
    for (auto x : f) {
        sum += x;
    }

    cout << sum << '\n';

    return 0;
}