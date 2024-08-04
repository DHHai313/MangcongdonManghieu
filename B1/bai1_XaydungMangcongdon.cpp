#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
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
  for (int x : F) {
    cout << x << " ";
  }
}