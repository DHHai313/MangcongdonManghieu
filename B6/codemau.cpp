#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> d(n + 1, 0);

  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    l--; // Đưa về chỉ số 0-based
    r--;
    d[l]++;
    if (r + 1 < n) {
      d[r + 1]--;
    }
  }

  vector<int> count(n, 0);
  count[0] = d[0];
  for (int i = 1; i < n; i++) {
    count[i] = count[i - 1] + d[i];
  }

  // Sắp xếp mảng a và mảng count theo thứ tự giảm dần
  sort(a.begin(), a.end(), greater<int>());
  sort(count.begin(), count.end(), greater<int>());

  ll res = 0;
  for (int i = 0; i < n; i++) {
    res += 1ll * a[i] * count[i];
  }

  cout << res << endl;

  return 0;
}
