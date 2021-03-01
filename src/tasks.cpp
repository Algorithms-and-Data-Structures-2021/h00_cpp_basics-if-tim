#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs == nullptr || rhs == nullptr) {
        return;
    }
    int tmp = *lhs;
    *lhs = *rhs;
    *rhs = tmp;
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows < 1 || num_cols < 1) {
        return nullptr;
    }
    int **two_dimension_array = new int*[num_rows];
    for (int row_index = 0; row_index < num_rows; row_index++) {
        two_dimension_array[row_index] = new int[num_cols];
    }
    for (int row_index = 0; row_index < num_rows; row_index++) {
        for (int column_index = 0; column_index < num_cols; column_index++) {
            two_dimension_array[row_index][column_index] = init_value;
        }
    }
    return two_dimension_array;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (arr_2d_source == nullptr || arr_2d_target == nullptr || num_rows < 1 || num_cols < 1) {
        return false;
    }
    for (int row_index = 0; row_index < num_rows; row_index++) {
        for (int column_index = 0; column_index < num_cols;column_index++) {
            int tmp = arr_2d_source[row_index][column_index];
            arr_2d_target[row_index][column_index] = tmp;
        }
    }
    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    for (int left = 0, right = arr.size() - 1; left < right; left++, right--) {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin == nullptr || arr_end == nullptr) {
        return;
    }
    for (int *left = arr_begin, *right = arr_end; left < right; left++, right--) {
        int tmp = * left;
        *left = *right;
        *right = tmp;
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if (arr == nullptr || size < 1) {
        return nullptr;
    }
    int *max = arr;
    for (int *iterator = arr; iterator <= arr + size - 1; iterator++) {
        if (*max < *iterator) {
            max = iterator;
        }
    }
    return max;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 != 0) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> result;
    for (int i = 0; i < arr_a.size(); i++) {
        for (int j = 0; j < arr_b.size(); j++) {
            if (arr_a[i] == arr_b[j]) {
                result.push_back(arr_a[i]);
            }
        }
    }
    return result;
}
