#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, q;
  cin >> n >> q;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }
  // tinh mang hieu D[n] cua a[n]
  int D[n + 5];
  D[0] = a[0];
  for (int i = 1; i < n; i++) {
    D[i] = a[i] - a[i - 1];
  }
  while (q--) {
    int l, r, k;
    cin >> l >> r >> k;
    // thay doi gia tri left va right truoc khi cong don ve mang a
    D[l] += k;
    D[r + 1] -= k;
  }
  // cong don mang hieu =>mang a sau thi tang
  long long F[n + 1];
  F[0] = D[0];
  for (int i = 1; i < n; i++) {
    F[i] = F[i - 1] + D[i];
  }
  for (int i = 0; i < n; i++) {
    cout << F[i] << " ";
  }
}