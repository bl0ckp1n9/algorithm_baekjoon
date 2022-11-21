#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(int a, int b) { return a > b; }

int solve11931() {
  int N;
  cin >> N;
  vector<int> v;

  for (int i = 0; i < N; i += 1) {
    int t;
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(), v.end(), compare);

  for (int i = 0; i < N; i += 1) {
    cout << v[i] << '\n';
  }

  return 0;
}