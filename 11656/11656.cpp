#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool cmp(string a, string b) { return a < b; }

int solve11656() {
  vector<string> v;
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i += 1) {
    string t = s.substr(i, s.size());
    v.push_back(t);
  }
  sort(v.begin(), v.end(), cmp);

  for (int i = 0; i < v.size(); i += 1) {
    cout << v[i] << '\n';
  }
  return 0;
}