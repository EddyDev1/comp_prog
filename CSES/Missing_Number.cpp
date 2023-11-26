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
  int N;
  cin >> N;

  vector<int> nums(N-1);
  int sum = 1;

  for(auto& n : nums)
    cin>>n;

  sort(nums.begin(), nums.end());

  for(int i = 2; i <= N; i++){
    sum += i;
    sum -= nums[i-2];
  }

  cout<<sum;

  return 0;
}
