//Lucky ticket

#include <iostream>

int main() {
    int NumberTicket{};
    std::cout << "Enter 6 numbers of your ticket: ";
    std::cin >> NumberTicket;
    const int MinNumber{ 100000 }, MaxNumber{ 999999 };
    while (NumberTicket < MinNumber || NumberTicket > MaxNumber) {
        std::cout << "The number is not in a range!\n";
        std::cin >> NumberTicket;
    }
    int LastDigit{ NumberTicket % 10 };
    int i{}, sum1{}, sum2{};

    while (LastDigit != 0) {
        i++;
        if (i > 0 && i < 4) {
            sum1 += LastDigit;
        }
        if (i > 3 && i < 7) {
            sum2 += LastDigit;
        }
        NumberTicket = (NumberTicket - LastDigit) / 10;
        LastDigit = NumberTicket % 10;
    }
    if (sum1 == sum2) {
        std::cout << "Go nuts, you've got a lucky ticket!!!)" << std::endl;
    }
    else {
        std::cout << "Sorry, you're not a winner! Good luck next time" << std::endl;
    }
    return 0;
}
