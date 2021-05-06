//Sum and average of digits in a number

#include <iostream>

int main() {
    std::cout << "This program calculates sum and average of numbers. Please, enter your number: ";
    int number{};
    std::cin >> number;

    if (number == 0) {
        std::cout << "You've entered an incorrect number! Try again" << std::endl;
    }
    else {
        int counter{}, sum{};
        while (number > 0) {
            sum += (number % 10);
            number /= 10;
            counter++;
        }
        std::cout << "Number contains " << counter << " digits" << std::endl;
        std::cout << "Sum equals " << sum << std::endl;
        int average{ sum / counter };
        std::cout << "Average equals " << average << std::endl;
    }

    return 0;
}

