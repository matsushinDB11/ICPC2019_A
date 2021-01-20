/**
 * @file max_of_array.cpp
 * @author Shintaro Matsumoto
 * @date 2021/01/08
 * @brief 配列の要素の中で最大の値を返す
 */

#include "ICPC2019A/max_of_array.h"
#include <algorithm>
using namespace std;

/**
 * @param array 整数型配列
 * @param num 配列の要素数
 * @return 配列の要素中最大の値
 */
int max_of_array(int *array, int num){
    int max = *max_element(array, array + num);
    return max;
}
