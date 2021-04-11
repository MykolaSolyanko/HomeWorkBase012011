//lacky ticket
#include <iostream>

int main() {
  std::cout << "Enter 6 digit number of your ticket: ";
  int TicketNumber{};
  std::cin >> TicketNumber;
  constexpr int MinNum{100000}, MaxNum{999999};
  while (TicketNumber < MinNum || TicketNumber > MaxNum) {
    std::cout << "\nThe ticket goes abroad!!" << std::endl;
    std::cin >> TicketNumber;

  }

  int i{}, sum1{}, sum2{};

  for (i = 0; i < 3; i++) {
    sum1 += TicketNumber % 10;
    TicketNumber /= 10;
  }
  for (i = 0; i < 3; i++) {
    sum2 += TicketNumber % 10;
    TicketNumber /= 10;
  }
  if (sum1 == sum2)
    std::cout << "It's a lucky ticket" << std::endl;
  else
    std::cout << "This ticket is not lucky" << std::endl;
}
