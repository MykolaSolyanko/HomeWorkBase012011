#include <iostream>
//Посчитать сумму и среднее арифметическое цифр в числе
#include <iostream>

int main() {
  std::cout << "Enter you number:";
  int number{};
  std::cin >> number;

  if (number == 0) {
    std::cout << "\nYour entered incorect number!" << std::endl;
    return 1;
  }
    int sum{}, counter{};
    while (number > 0) {
      sum += (number % 10);
      number /= 10;
      counter++;
    }
    std::cout << "Number contains " << counter << " digits" << std::endl;
    std::cout << "Sum = " << sum << std::endl;
    float avarage{static_cast<float>(sum) / static_cast<float>(counter)};
    std::cout << "Avarage = " << avarage << std::endl;
  return 0;
  }
