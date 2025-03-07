
```cpp
int power(int a, int b, const int p = P) {
    int res = 1;
    for (; b; b >>= 1, a = 1LL * a * a % p) {
        if (b & 1) {
            res = 1LL * res * a % p;
        }
    }
    return res;
}
```