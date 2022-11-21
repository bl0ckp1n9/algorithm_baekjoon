#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


bool compare(string a, string b) {
  return a < b;
}

int solve15819() {
  int N;
  int T;
  vector<string> v;
  cin >> N >> T;
  for(int i=0;i<N;i+=1) {
    string t;
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(),v.end(),compare);

  cout << v[T-1] <<'\n';
  return 0;
}