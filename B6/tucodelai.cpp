#include <bits/stdc++.h>
#include <functional>
using ll = long long;
using namespace std;
int main() {

  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> d(n + 1, 0);

  while (q--) {
    int l, r;
    cin >> l >> r;
    --l;
    --r;
    d[l] += 1;
    d[r + 1] -= 1;
  }

  vector<int> f(n, 0);
  f[0] = d[0];
  for (int i = 1; i < n; i++) {

    f[i] = f[i - 1] + d[i];
  }
  sort(a.begin(), a.end(), greater<int>());
  sort(f.begin(), f.end(), greater<int>());
  ll res = 0;
  for (int i = 0; i < n; i++) {
    res += 1ll * a[i] * f[i];
  }

  cout << res << endl;
}