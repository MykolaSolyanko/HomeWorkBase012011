//Sum of odd numbers

#include <iostream>

int main() {

    std::cout << "Enter a quantity of nambers you wanna calculate:\n ";

    constexpr int minQuant{ 1 }, maxQuant{ 50 };
    int quantity{};
    std::cin >> quantity;

    while (quantity < minQuant || quantity > maxQuant) {

        std::cout << "Quantity of numbers is out of the range. Try again:\n";
        std::cin >> quantity;
    }

    constexpr int minNumber{ -60 }, maxNumber{ 90 };
    std::cout << "Enter your numbers:\n ";

    int sum{}, counter{ 1 };

    while (counter <= quantity) {

        int number{};
        std::cin >> number;

        if (number < minNumber || number > maxNumber) {
            std::cout << "This number is out of range\n";
            continue;
        }

        if (number % 2) {
            sum += number;
        }
        ++counter;
    }

    std::cout << "Sum of your odd numbers is " << sum << std::endl;

    return 0;
}

