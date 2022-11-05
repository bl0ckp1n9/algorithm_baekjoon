#include <algorithm>
#include <iostream>
#include <vector>
/*
5
3 4
1 1
1 -1
2 2
3 3

서로 중복 X
*/

using namespace std;
// boj.kr/11651

// > 내림 < 오름
bool compare(pair<int, int> a, pair<int, int> b) {
  if (a.second == b.second) {
    return a.first < b.first;
  }
  return a.second < b.second;
}
int solve11651() {
  vector<pair<int, int>> cs;
  int N;
  cin >> N;

  for (int i = 0; i < N; i += 1) {
    pair<int, int> temp;
    cin >> temp.first >> temp.second;
    cs.push_back(temp);
  }

  sort(cs.begin(), cs.end(),compare);

  for (int i = 0; i < cs.size(); i += 1) {
    cout << cs[i].first << ' ' << cs[i].second << '\n';
  }
}
