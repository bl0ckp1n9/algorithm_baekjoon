#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int solve2470() {
  int N;
  vector<int> v;
  pair<pair<int, int>, int> p;
  cin >> N;

  for (int i = 0; i < N; i += 1) {
    int t;
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(), v.end());

  int s = 0;
  int l = N - 1;
  p.first.first = v[0];
  p.first.second = v[N - 1];
  p.second = abs(p.first.first + p.first.second);

  while (s < l) {
    if (abs(v[s] + v[l]) < p.second) {
      p.first.first = v[s];
      p.first.second = v[l];
      p.second = abs(v[s] + v[l]);
    }
    if (abs(v[s]) > abs(v[l])) {
      s += 1;
    } else {
      l -= 1;
    }
  }
  cout << p.first.first << " " << p.first.second << '\n';
}