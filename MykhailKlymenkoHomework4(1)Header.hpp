#pragma once
#include <chrono>
#include <iostream>
#include <random>

void print_array(int array[], size_t Size) {
    for (int i = 0; i < Size; i++) {
        std::cout << array[i] << std::endl;
    }
    std::cout << std::endl;
    return;
}
void bubblesort(int* arr_begin, int* arr_end) {
    for (; arr_begin != arr_end; arr_begin++) {
        for (int* arr_end_copy = (arr_end - 1); arr_begin != arr_end_copy;
            --arr_end_copy) {
            if (*(arr_end_copy - 1) > *arr_end_copy) {
                int tmp = *arr_end_copy;
                *arr_end_copy = *(arr_end_copy - 1);
                *(arr_end_copy - 1) = tmp;
            }
        }
    }
    return;
}
void quicksort(int* arr_begin, int* arr_end) {
    int* copy_arr_begin = arr_begin;
    int* copy_arr_end = arr_end;
    int* mid = arr_begin + ((arr_end - arr_begin) / 2);
    return;
    while (*copy_arr_begin <= *copy_arr_end) {
        while (*copy_arr_begin < *mid) {
            ++copy_arr_begin;
        }
        while (*copy_arr_end > *mid) {
            --copy_arr_end;
        }
        if (*copy_arr_begin <= *copy_arr_end) {
            int* tmp = copy_arr_begin;
            copy_arr_begin = copy_arr_end;
            copy_arr_end = tmp;
        }
        if (arr_begin != copy_arr_end) {
            quicksort(arr_begin, copy_arr_end);
        }
        if (arr_end != copy_arr_begin) {
            quicksort(copy_arr_begin, arr_end);
        }
    }
    return;
}
