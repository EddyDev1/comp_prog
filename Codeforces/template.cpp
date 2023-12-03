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

void dbg_out() { std::cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  std::cerr << ' ' << H;
  dbg_out(T...);
}
#ifdef NEAL_DEBUG
#define dbg(...) std::cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void run_case(){
  return;
}

int main() {
  std::ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
  std::cin.tie(nullptr);
#endif
  int tests;
  cin >> tests;

  while(tests-- > 0){
    run_case();
  }

  return 0;
}