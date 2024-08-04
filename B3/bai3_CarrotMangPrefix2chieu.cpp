#include <bits/stdc++.h>
using namespace std;
long long F[1005][1005];
int a[1005][1005];
int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  // xay dung mang prefix 2 chieu

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      F[i][j] = F[i - 1][j] + F[i][j - 1] - F[i - 1][j - 1] + a[i][j];
    }
  }

  int q;
  cin >> q;

  while (q--) {
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << F[x2][y2] - F[x1 - 1][y2] - F[x2][y1 - 1] + F[x1 - 1][y1 - 1]
         << endl;
  }
}