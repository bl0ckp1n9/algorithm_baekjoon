#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef long long int  ll;

int solve13900() {
  int N;
  ll total=0;
  vector<ll> v;
  vector<ll> hap;
  cin >> N;
 


  for(int i=0;i<N;i+=1) {
    int t;
    cin >> t;
    v.push_back(t);
    if(i == 0) hap.push_back(t);
    else hap.push_back(hap[i-1]+v[i]);
  }

  ll cnt=0;
  for(int i=0;i<v.size()-1;i+=1) {
    cnt += v[i] * (hap[v.size()-1] - hap[i]) ;
  }

  cout << cnt;
}