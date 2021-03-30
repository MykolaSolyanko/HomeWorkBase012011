#include <iostream>

int main() {
  std::cout << "Enter 6 digit number of your ticket: ";
  int TicketNumber{};
  std::cin >> TicketNumber;
  constexpr int MinNum{100000}, MaxNum{999999};
  while (TicketNumber < MinNum || TicketNumber > MaxNum) {
    std::cout << "\nThe ticket goes abroad!!" << std::endl;
  }

  int tmp1{}, tmp2{}, i{};

  for (i = 0; i < 3; i++) {
    tmp1 += TicketNumber % 10;
    TicketNumber /= 10;
  }
  for (i = 0; i < 3; i++) {
    tmp2 += TicketNumber % 10;
    TicketNumber /= 10;
  }
  if (tmp1 == tmp2)
    std::cout << "It's a lucky ticket" << std::endl;
  else
    std::cout << "This ticket is not lucky" << std::endl;
}
