#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, q;
  cin >> n >> q;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long pre[n];
  pre[0] = 0;
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    if (l == 0) {
      cout << pre[r] << endl;
    } else {
      cout << pre[r] - pre[l - 1] << endl;
    }
  }
}