#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, s;
  cin >> n >> s;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r;
  int res = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
    while (sum > s) {
      sum -= a[l];
      l++;
    }
    res = max(res, i - l + 1);
  }
  cout << res;
}