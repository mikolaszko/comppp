#include <bits/stdc++.h>

using namespace std;
int main() {
  int num;
  cin >> num;
  if (num == 2) {
    cout << "NO";
    return 0;
  }
  if (num % 2)
    cout << "NO";
  else
    cout << "YES";
}
