#ifndef TEST_TOP100_COMMON_H_
#define TEST_TOP100_COMMON_H_

#include <vector>
#include <string>
#include <assert.h>
#include <iostream>
#include <unordered_set>

using namespace std;

template <typename T> void printVec(const vector<T>& vec) {
  for (auto v : vec) {
    cout << v << "\t";
  }
  cout << endl;
}

void printVec2D(const vector<vector<int>>& matrix) {
  for (auto m : matrix) {
    for (auto n : m) {
      cout << n << "\t";
    }
    cout << endl;
  }
}

#endif //TEST_TOP100_COMMON_H_
