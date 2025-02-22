# 第十六届蓝桥杯模拟赛（第三期）

## 1. 

答案：$23$。

```cpp
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

    cout << f.back() << '\n';

    return 0;
}
```

## 2. 


答案：$259072$。



```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 2024, m = 1024;

    cout << n / __gcd(n, m) * m << '\n';

    return 0;
}
```

## 3. 

答案：$40$。

```cpp
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
```

## 4. 

答案：$2017$。

```cpp
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
```

## 5. 

答案：$4655$。

```cpp
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
```

## 6. 

答案：$\rm NQN$。

```cpp
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
```

## ~7. 

答案：$2963628$。

>【问题描述】
> 
> 如果一个字符串中只包含字符 0 和字符 1，则称为一个 01 串（包含全为 0 的串和全为 1 的串）。
> 
> 请问有多少个长度为 24 的 01 串，满足任意 5 个连续的位置中不超过 3 个位置的值为 1 。

（此题答案不确定）

优解是状压，但是由于是填空题，也可以暴力。

暴力时间复杂度：

$$
2^{24} \times 24 = 402,653,184 \approx 4e8
$$

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 24;

    cout << (1 << 24) << '\n';

    int ans = 0;
    for (int i = 0; i < 1 << n; i++) {
        int cnt[2] {};
        for (int j = 0; j < 5; j++) { // 0 .. 4
            cnt[i >> j & 1] += 1;
        }
        if (cnt[1] > 3) {
            continue;
        }
        bool ok = true;
        for (int j = 5; j < n; j++) {
            cnt[i >> (j - 5) & 1] -= 1;
            cnt[i >> j & 1] += 1;
            if (cnt[1] > 3) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            continue;
        } else {
            ans += 1;
        }
    }

    cout << ans << '\n';

    return 0;
}
```

## 8. 

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a;
    cin >> n >> m >> a;
    cout << n * m * a << '\n';

    return 0;
```

## 9. 

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) {
        cin >> x;
    }

    int ans = 0, mx = -1;
    for (auto x : a) {
        if (x > mx) {
            ans += 1;
            mx = x;
        }
    }

    cout << ans << '\n';

    return 0;
}
```

## 10. 



```cpp
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
```

## 11. 

简单模拟。

```cpp
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
```

## 12.

给定一个 $n \times m$ 的矩阵，在矩阵中找出一个的一个“十”字形状的区域，满足该区域内的值的和最大。


```cpp
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
```