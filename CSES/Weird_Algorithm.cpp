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
  int64_t N;
  cin>>N;

  while(N!=1){
    cout<<N<<' ';
    if(N%2==0){
      N>>=1;
    } else {
      N*=3;
      N++;
    }
  }

  cout<<N;
  
  return 0;
}