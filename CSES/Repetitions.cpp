#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <unordered_set>
#include <vector>

using namespace std;

void run_case(){
  return;
}

int main(){
  string n;
  cin >> n;

  int ans = -1, l = 0, len = int(n.size());
  unordered_map<char, int> window;

  for(int r = 0; r < len; ++r){
    if(n[r] == n[r+1]){
      l = r;

      while(l < len && n[r] == n[l]){
        window[n[r]]++;
        ++l;
      }
      
      ans = max(ans, window[n[r]]);
      window[n[r]] = 0;
      r = l;
    }
  }

  cout<<ans;

  return 0;
}
