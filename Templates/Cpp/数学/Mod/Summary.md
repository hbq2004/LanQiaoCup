
```cpp
void add(int &a, int b) {
    a = (1LL * a + b) % P;
}

void mul(int &a, int b) {
    a = (1LL * a * b) % P;
}

void sub(int &a, int b) {
    a = ((a - b) % P + P) % P;
}
```