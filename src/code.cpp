#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    int result = left - right;
    
    return result * result;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    
    int mod;
    int cur_pos = 0;
    if (mask < 1 || bit_pos < 0) {
      return false;
    }
    while (mask) {
      mod = mask % 2;
      mask = mask / 2;
      if (cur_pos == bit_pos && mod == 1) {
        return true;
      }
      cur_pos = cur_pos + 1;
    }
    
    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    // Write your code here ...

    return 0;
  }

  // Task 4
  void swap_args(int *left, int *right) {

    // Write your code here ...
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    
    int result = 0;
    if (arr == nullptr || length < 1) {
      return 0;
    }
    for (int i = 0; i < length; i++) {
      result = result + arr[i];
    }
    return result;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    // Write your code here ...

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
