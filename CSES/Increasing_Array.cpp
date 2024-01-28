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
  int N, i = 0, ans = 0;
  cin >> N;

  vector<int> nums(N, 0);

  for(auto& n : nums)
    cin >> n;

  for (; i < N; ++i)
  {
    if (i + 1 < N && nums[i + 1] < nums[i])
    {
      ans += abs(nums[i + 1] - nums[i]);
      nums[i + 1] = nums[i];
    }
    else if(i + 1 == N && nums[i] < nums[i + 1])
    {
      ans += abs(nums[i] - nums[i + 1]);
    }
  }

  cout << ans << '\n';
  return 0;
}
