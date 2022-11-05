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
// boj.kr/11650

int solve11650() {
  vector<pair<int, int>> cs;
  int N;
  cin >> N;

  for (int i = 0; i < N; i += 1) {
    pair<int, int> temp;
    cin >> temp.first >> temp.second;
    cs.push_back(temp);
  }

  sort(cs.begin(), cs.end());

  for (int i = 0; i < cs.size(); i += 1) {
    cout << cs[i].first << ' ' << cs[i].second << '\n';
  }
}
