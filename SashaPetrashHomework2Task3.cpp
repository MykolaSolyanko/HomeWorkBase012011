#include <iostream>

int main() {
  std::cout << "Enter your number: ";
  int number{}, rNumber{};
  std::cin >> number;

  while (number != 0) {
    rNumber *= 10;
    rNumber += number % 10;
    number /= 10;
  }
  std::cout << "Reversed number is: " << rNumber << std::endl;
  return 0;
}
