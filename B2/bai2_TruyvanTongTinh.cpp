#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, q;
  cin >> n >> q;
  int a[n];
  int F[n];
  for (int &x : a) {
    cin >> x;
  }
  // xay dung mang prefix
  F[0] = a[0];
  for (int i = 1; i < n; i++) {
    F[i] = F[i - 1] + a[i];
  }
  //   for (int x : F) {
  //     cout << x << " ";
  //   }
  while (q--) {
    int l, r;
    cin >> l >> r;
    if (l == 0) {
      cout << "tong tu left sang right = ";
      cout << F[r] << endl;
    } else {
      cout << "tong tu left sang right = ";
      cout << F[r] - F[l - 1] << endl;
    }
  }
}