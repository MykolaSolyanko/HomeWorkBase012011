#pragma once
#include <array>
#include <cmath>
#include <limits>

void sort(std::array<unsigned int, 5>& array) {
    for (size_t i = 0; i < array.size(); i++) {
        for (size_t j = array.size() - 1; j > i; j--) {
            if (array[j - 1] > array[j]) {
                unsigned int tmp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = tmp;
            }
        }
    }
    return;
}
void sort(std::array<double, 5>& array) {
    for (size_t i = 1; i < array.size(); i++) {
        for (size_t j = array.size() - 1; j >= i; j--) {
            bool flag = std::fabs(array[j - 1] - array[j]) <=
                std::numeric_limits<double>::epsilon();
            if (!flag && (array[j - 1] > array[j])) {
                double tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }
        }
    }
    return;
}
