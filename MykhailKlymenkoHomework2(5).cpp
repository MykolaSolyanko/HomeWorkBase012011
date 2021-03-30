#include <iostream>

int main() {
    std::cout << "This program finds the best divider.\n"
        "Please, enter a number: ";
    int number{};
    std::cin >> number;
    if (number < 0) {
        number = -number;
    }
    int bestSum{}, bestDivider{}, divider{ number };
    while (divider != 0) {
        if (number % divider == 0) {
            int sum{}, temporaryDivider{ divider };
            while (temporaryDivider != 0) {
                sum += temporaryDivider % 10;
                temporaryDivider /= 10;
            }
            if (sum > bestSum) {
                bestDivider = divider;
                bestSum = sum;
            }
            std::cout << "Divider: " << divider << std::endl;
        }
        --divider;
    }
    std::cout << "The best divider = " << bestDivider << std::endl;
    return 0;
}
