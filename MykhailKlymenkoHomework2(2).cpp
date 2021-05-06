//Reversed number

#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int number{}, reversedNumber{};
    std::cin >> number;

    while (number != 0) {
        reversedNumber *= 10;
        reversedNumber += number % 10;
        number /= 10;
    }
    std::cout << "Reversed number is: " << reversedNumber << std::endl;

    return 0;
}
