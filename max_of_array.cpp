//
// Created by matsu_000 on 2021/01/08.
//

#include "max_of_array.h"
#include <algorithm>
using namespace std;

int max_of_array(int *array, int num){
    int max = *max_element(array, array + num);
    return max;
}
