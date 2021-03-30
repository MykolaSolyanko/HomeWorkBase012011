// Set bits in a number

#include <iostream>

int main() {
    int number{};
    std::cout << "Enter a number: ";
    std::cin >> number;
    size_t count = 0;
    while (number != 0) {
        count += number & 1;
        number >>= 1;
    }

    std::cout << "The number of set bits is " << count << std::endl;
    return 0;
}
