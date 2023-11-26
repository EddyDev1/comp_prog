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

  int64_t sum = 0, esum = N * (N+1) / 2, num;
  for(int n=0; n<N-1; n++){
    cin >> num;
    sum += num;
  }

  cout << esum - sum;
  return 0;
}
