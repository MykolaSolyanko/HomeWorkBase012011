#include <cmath>
#include <iostream>

int main() {
  constexpr int minRange{1};
  constexpr int maxRange{255};
  constexpr int val1{4};
  constexpr int val2{2};

  float a{}, b{}, c{}, x{}, x1{}, x2{};

  std::cout << "Quadratic equation looks like: a*x^2 + b*x + c = 0, where 'a' "
               "doesn't equal 0 "
            << '\n';

  std::cout << "Please enter 'a' value in range [" << minRange << "..."
            << maxRange << "]:\t";

  std::cin >> a;

  if (a > maxRange || a < minRange) {
    std::cout << "Incorrect input a";
    return -1;
  }

  std::cout << "Please enter 'b' value in range [" << minRange << "..."
            << maxRange << "]:\t";

  std::cin >> b;

  if (b > maxRange || b < minRange) {
    std::cout << "Incorrect input b\n";
    return -1;
  }

  std::cout << "Please enter 'c' value in range [" << minRange << "..."
            << maxRange << "]:\t";

  std::cin >> c;

  if (c > maxRange || c < minRange) {
    std::cout << "Incorrect input c\n";
    return -1;
  }

  float D = (b * b) - (val1 * a * c);
  std::cout << "In order to find roots of the equation, you have to calculate "
               "its discriminant\n";
  std::cout << "General view of the discriminant is: D = b^2 - (4 * a * c)\n";

  if (D > 0) {

    x1 = ((-b) + sqrt(D)) / (val2 * a);
    x2 = ((-b) - sqrt(D)) / (val2 * a);
    std::cout << "D = " << D << '\n';
    std::cout << "This equation has 2 roots x1 and x2:" << '\n';
    std::cout << "x1 = " << x1 << '\n';
    std::cout << "x2 = " << x2 << '\n';
  }

  if (D == 0) {
    x = -(b / (val2 * a));
    std::cout << "D = " << D << '\n';
    std::cout << "The discriminant equals '0'. Regarding this, the equation "
                 "has only one root!\n";
    std::cout << "x = " << x << '\n';
  }
  if (D < 0) {
    std::cout << "Descriminant is lower than 0!!! \nThis equation has no "
                 "solutions!\n";
  }

  return 0;
}
