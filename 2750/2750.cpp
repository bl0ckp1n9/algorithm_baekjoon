#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long int  ll;

// same boj.kr/2751
int sovle2750() {
  vector<int> v;
  int N;
  cin >> N;

  for(int i=0;i<N;i+=1)
    {
      int t;
      cin >> t;
      v.push_back(t);
    }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i+=1) {
    cout << v[i] <<'\n';
  }
}