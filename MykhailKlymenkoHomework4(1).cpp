#include "Sort.h"

int main() {
    std::cout << "This program sorts arrays and executes a runtime comparison"
        << std::endl;
    std::cout << "Press 1 to fill the array manually" << std::endl;
    std::cout << "Press 2 to fill the array with random values" << std::endl;

    int choice{};
    std::cin >> choice;

    constexpr size_t Size{ 10 };
    int array[Size]{};
    int* arr_begin{ array };
    int* arr_end{ array + Size };
    int arr_copy[Size]{};
    int* arr_copy_begin{ arr_copy };
    if (choice == 1) {
        std::cout << "Fill the array with 10 numbers " << std::endl;
        for (int i = 0; i < Size; i++) {
            if (!(std::cin >> array[i]) || array[i] == 0) {
                std::cout << "Incorrect input, try again!" << std::endl;
                ;
                --i;
                continue;
            }
            arr_copy[i] = array[i];
        }
    }

    else if (choice == 2) {
        while (arr_begin != arr_end) {
            std::random_device gen;
            *(arr_begin) = gen();
            *(arr_copy_begin++) = *(arr_begin++);
        }

        arr_begin = array;
        arr_copy_begin = arr_copy;
    }

    else {
        std::cout << "Incorrect input. Try again" << std::endl;
        return 0;
    }

    std::cout << "Array is:" << std::endl;
    print_array(array, Size);
    auto start = std::chrono::system_clock::now();
    bubblesort(arr_begin, arr_end);
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> runtime_bubble = end - start;
    std::cout << "Runtime (bubblesort): " << runtime_bubble.count() << "s"
        << std::endl;
    std::cout << "Bubblesorted array is: " << std::endl;
    print_array(array, Size);
    start = std::chrono::system_clock::now();
    int* arr_copy_end{ arr_copy + Size };
    quicksort(arr_copy_begin, arr_copy_end);
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> runtime_quick = end - start;
    std::cout << "Runtime (quicksort): " << runtime_quick.count() << "s"
        << std::endl;
    std::cout << "Quicksorted array is :" << std::endl;
    print_array(array, Size);

    if (runtime_bubble < runtime_quick) {
        std::cout << "Bubblesorting is faster" << std::endl;
    }

    else {
        std::cout << "Quicksorting is faster" << std::endl;
    }
    return 0;
}
