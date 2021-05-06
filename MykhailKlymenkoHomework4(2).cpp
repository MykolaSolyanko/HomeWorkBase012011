#include "Header.h"
#include <iostream>

int main() {
    std::cout << "This program sorts arrays" << '\n';
    std::cout << "Press 1 for unsigned int" << '\n';
    std::cout << "Press 2 for double" << '\n';
    int choice{ 0 };
    std::cin >> choice;
    constexpr size_t Size{ 5 };
    if (choice == 1) {
        std::array<unsigned int, Size> array{};
        std::cout << "Fill the array with 5 numbers" << '\n';
        for (size_t i = 0; i < array.size(); i++) {
            if (!(std::cin >> array[i]) || array[i] == 0) {
                std::cout << "Incorrect input. Try again" << '\n';
                return 0;
            }
        }
        sort(array);
        std::cout << "Your array is: " << '\n';
        for (unsigned int elem : array) {
            std::cout << elem << ' ';
        }
        std::cout << '\n';
    }
    else if (choice == 2) {
        std::cout << "Fill the array with 5 numbers" << '\n';
        std::array<double, Size> array{};
        for (size_t i = 0; i < array.size(); i++) {
            if (!(std::cin >> array[i])) {
                std::cout << "Incorrect input. Try again" << '\n';
            }
        }
        sort(array);
        std::cout << "Your array is: " << '\n';
        for (double elem : array) {
            std::cout << elem << ' ';
        }
        std::cout << '\n';
    }

    else {
        std::cout << "Wrong data. Try again" << '\n';
        return 0;
    }
    return 0;
}
