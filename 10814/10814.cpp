#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Data{
    int d;
    int k;
    string s;
  };
bool compare( Data a, Data b) {
  if(a.k == b.k) return a.d < b.d;
  return a.k < b.k;
}

int solve10814() {
  int N;
  cin >> N;
  vector<Data> vl;

  for (int i = 0; i < N; i += 1) {
    Data t;
    t.d = i;
    cin >> t.k >> t.s;
    vl.push_back(t);
  }

  sort(vl.begin(), vl.end(), compare);

  for (int i = 0; i < N; i += 1) {
    cout << vl[i].k <<' ' << vl[i].s << '\n';
  }
  return 0;
}