
#include <iostream>

int main() {
    std::cout << "This program removes elements from an array\n";
    int size{ 5 };
    int* arr{ new int[size] };
    std::cout << "Enter your array:\n";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 20;
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
    int position{};
    std::cout << "Enter the position you want to delete: ";
    std::cin >> position;
    position--;
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;

    return 0;
}
