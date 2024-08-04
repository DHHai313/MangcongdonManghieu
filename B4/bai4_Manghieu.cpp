#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n];
  int D[n];
  for (int &x : a) {
    cin >> x;
  }
  // xay dung mang hieu
  D[0] = a[0];
  for (int i = 1; i < n; i++) {
    D[i] = a[i] - a[i - 1];
  }
  for (int x : D) {
    cout << x << " ";
  }
}