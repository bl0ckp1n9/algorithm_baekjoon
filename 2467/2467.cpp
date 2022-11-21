#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
/*
-99 -1 1 2 98
-1 
*/

int solve2467() 
{
  int N;
  cin >> N;
  vector<int> v;
  pair<int,pair<int,int>> p;
  for(int i=0;i<N;i+=1) {
    int t;
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(),v.end());

  p.second.first = v[0];
  p.second.second = v[N-1];

  p.first = v[0] + v[N-1];

  int n = 0;
  int l = N-1;
  while(n < l) {
    int t = v[n] + v[l];
    if(abs(t) <= abs(p.first)) {
      p.first = t;
      p.second.first = v[n];
      p.second.second = v[l];
    }
    if(abs(v[n]) < abs(v[l])) {
      l -= 1;
    }
    else n +=1;

  }

  cout << p.second.first <<" " << p.second.second << '\n';
  return 0;
}