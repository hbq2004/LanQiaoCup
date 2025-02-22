#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 2024, m = 1024;

    cout << n / __gcd(n, m) * m << '\n';

    return 0;
}