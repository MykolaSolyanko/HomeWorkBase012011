//Lucky ticket

#include <iostream>

int main() {
    int NumberTicket{};
    std::cout << "This program verifies a lucky ticket." << std::endl;
    std::cout << "Enter 6 numbers of your ticket: ";
    std::cin >> NumberTicket;
    constexpr int MinNumber{ 100000 }, MaxNumber{ 999999 };
    while (NumberTicket < MinNumber || NumberTicket > MaxNumber) {
        std::cout << "The number is not in a range!\n";
        std::cin >> NumberTicket;
    }
    int LastDigit{ NumberTicket % 10 };
    int i{}, sum1{}, sum2{};
    constexpr int lim1{ 0 }, lim2{ 4 }, lim3{ 3 }, lim4{ 7 };

    while (LastDigit != 0) {
        i++;
        if (i > lim1 && i < lim2) {
            sum1 += LastDigit;
        }
        if (i > lim3 && i < lim4) {
            sum2 += LastDigit;
        }
        NumberTicket = (NumberTicket - LastDigit) / 10;
        LastDigit = NumberTicket % 10;
    }

    sum1 == sum2
        ? std::cout << "Go nuts, you've got the lucky ticket!!!)" << std::endl
        : std::cout << "Sorry, you're not a winner! Good luck next time"
        << std::endl;

    return 0;
}
