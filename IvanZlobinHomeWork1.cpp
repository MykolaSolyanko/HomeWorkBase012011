#include <cmath>
#include <iostream>
#include <windows.h>

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  constexpr int Min{2};
  constexpr int Max{255};
  constexpr int v1{4};
  constexpr int v2{2};
  float a{}, b{}, c{}, x{}, x1{}, x2{};

  std::cout << "ax^2 + bx + c = 0 \n";
  std::cout << "Please enter number 'a' in range [2..255]:";
  std::cin >> a;

  if (a >= Min && a <= Max) {
    std::cout << "Please enter number 'b' in range [2..255]:";
    std::cin >> b;
    if (b >= Min && b <= Max) {
      std::cout << "Please enter number 'c' in range [2..255]:";
      std::cin >> c;
      if (c >= Min && c <= Max) {
        std::cout << "Find the discriminant \n"
                  << "D = b^2 - 4(ac)\n";
        float D = (b * b) - (v1 * a * c);
        if (D > 0) {
          x1 = ((-b) + sqrt(D)) / (v2 * a);
          x2 = ((-b) - sqrt(D)) / (v2 * a);
          std::cout << "Discriminant > 0 , two roots" << std::endl;
          std::cout << "x1 = " << x1 << std::endl;
          std::cout << "x2 = " << x2 << std::endl;
        } else if (D == 0) {
          x = -(b / v2 * a);
          std::cout << "D = " << D << "\n";
          std::cout << "Discriminant = 0, one root \n";
          std::cout << "x = " << x << std::endl;
        } else {
          std::cout << "Discriminant < 0, no solution \n"; // D<0
        }
      } else {
        std::cout
            << "You entered an incorrect number, try entering the number again"
            << std::endl;
      }
    } else {
      std::cout
          << "You entered an incorrect number, try entering the number again"
          << std::endl;
    }
  } else {
    std::cout
        << "You entered an incorrect number, try entering the number again"
        << std::endl;
  }

  return 0;
}
