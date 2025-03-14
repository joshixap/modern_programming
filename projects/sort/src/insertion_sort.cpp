#include "insertion_sort.hpp"
#include <iostream>

void insertion_sort(int* const arr, const int size) {
    for (int i = 1; i != size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void print_array(const char* const comment, int* arr, const int size) {
    const char format = ' ';
    std::cout << comment;

    for (int i = 0; i != size; ++i) {
        std::cout << format << arr[i];
    }

    std::cout << std::endl;
}
