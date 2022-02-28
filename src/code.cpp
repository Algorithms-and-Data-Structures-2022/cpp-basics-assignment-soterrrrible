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

    if (left >= middle && left >= right) {
      return left;
    } else if (middle >= left && middle >= right) {
      return middle;
    } else {
      return right;
    }

    return 0;
  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left == nullptr || right = nullptr) {
      return;
    } else {
      int middle = *left;
      *left = *right;
      *right = middle;
    }
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
    int max = 0;
    int flag = 0;
    int max_i = 0;
    if (arr == nullptr || length < 1) {
      return nullptr;
    }
    for (int i = 0; i < length; i++) {
      if (flag == 0) {
        max = arr[0];
        flag = flag + 1;
      }
      if (max < arr[i]) {
        max = arr[i];
        max_i = i;
      }
    }
    return &arr[max_i];
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    
    if (length < 1) {
      return nullptr;
    }
    int* arr = new int[length];
    for (int i = 0; i < length; i++) {
      arr[i] = init_value;
    }
    return arr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

     if (length < 1 || arr_in == nullptr) {
      return nullptr;
    }
    int* new_arr = new int[length];
    for (int i = 0; i < length; i++) {
      new_arr[i] = arr_in[i];
    }
    
    return new_arr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    } else if (length < 1) {
      os << "Invalid argument: length\n";
    } else if (k < 1) {
      os << "Invalid argument: k\n";
    } else {
      for (int i = 0; i < length; i = i + k) {
        os << arr[i] << "\t";
       }
    }
  }

}  // namespace assignment
