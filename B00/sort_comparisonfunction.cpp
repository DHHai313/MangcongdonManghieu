#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
// comparsion function
// tra ve true neu muon a dung truoc b
// tra ve false neu muon b dung truoc a
bool cmp(int a, int b) {
  if (abs(a) > abs(b))
    return true;
  else
    return false;
}
using namespace std;
using ll = long long;
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }
  // ham sort(a,a+n) tu dong sap xep theo thu tu tang dan
  sort(a, a + n);
  cout << "mag sau khi sap xep tang dan\n";
  for (int x : a) {
    cout << x << " ";
  }
  cout << "\nmang sau khi sap xep giam dan\n";
  sort(a, a + n, greater<int>());
  for (int x : a) {
    cout << x << " ";
  }
  cout << "\nmang sau khi sap sep theo ham tri tuyet doi giam dan\n";
  // ham sort voi compare function tu dinh nghia
  sort(a, a + n, cmp);
  for (int x : a) {
    cout << x << " ";
  }
  // sort voi vector
  cout << "\nsap xep voi vector\n";
  vector<int> v(n);
  for (int &x : v) {
    cin >> x;
  }
  sort(v.begin(), v.end());
  cout << "mag sau khi sap xep tang dan\n";
  for (int x : v) {
    cout << x << " ";
  }
  sort(v.begin(), v.end(), greater<int>());
  cout << "mag sau khi sap xep giam dan\n";
  for (int x : v) {
    cout << x << " ";
  }
}