#include <bits/stdc++.h>
using namespace std;

int
main()
{
  int N, K;
  cin >> N >> K;
  int ans = 0;
  while (1) {
    K = K - N;
    if (K <= 0) {
      cout << ans << endl;
      exit(0);
    }
    N++;
    ans++;
  }
}
