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

  int ans = -1, count = 0;

  for(int r = 0; r < int(n.size())-1; ++r){
    if(n[r] == n[r+1])
      ++count;
    else{
      ans = max(ans, count);
      count = 0;
    }
  }

  cout<<ans;

  return 0;
}
