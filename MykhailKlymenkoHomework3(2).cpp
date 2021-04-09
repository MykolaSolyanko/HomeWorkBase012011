#include <algorithm>
#include <iostream>

int main() {
    std::cout << "This program sorts the numbers entered into the array in the "
        "returned order\n";
    constexpr int count{ 5 };
    int arr[count]{ NULL };
    std::cout << "Please, enter your array:\n";
    for (size_t i = 0; i < count; i++) {
        std::cin >> arr[i];
    }
    std::sort(arr, arr + count, [](int a, int b) { return a < b; });

    std::cout << "Your sorted array is: \n";

    for (size_t i = 0; i < count; i++) {
        std::cout << arr[i] << "\t";
    }

    return 0;
}
