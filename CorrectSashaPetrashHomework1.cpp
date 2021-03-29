#include <cmath>
#include <iostream>

int main() {
  setlocale(LC_ALL, "Russian");
  constexpr int Min{2};
  constexpr int Max{255};

  std::cout << "Квадратное уравнение: ax^2 + bx + c = 0, где а != 0 \n";
  std::cout << "ВВедите а от " << Min << " до " << Max << ":";
  float a{};
  std::cin >> a;

  if (a > Max || a < Min) {
    std::cout << "Вы ввели чило превышающее гранцу" << std::endl;
    return 1;
  }

  std::cout << "ВВедите b от " << Min << " до " << Max << ":";
  float b{};
  std::cin >> b;

  if (b > Max || b < Min) {
    std::cout << "Вы ввели чило превышающее гранцу" << std::endl;
    return 1;
  }

  std::cout << "ВВедите c от " << Min << " до " << Max << ":";
  float c{};
  std::cin >> c;

  if (c > Max || c < Min) {
    std::cout << "Вы ввели чило превышающее гранцу" << std::endl;
    return 1;
  }
  std::cout << "Найдем дискримнант \n"
            << "D = b^2 - 4(ac)\n";

  constexpr int v1{4};
  constexpr int v2{2};

  float D{(b * b) - (v1 * a * c)};

  if (D > 0) {
    auto x1{static_cast<float>((-b) + sqrt(D)) / (v2 * a)};
    auto x2{static_cast<float>((-b) - sqrt(D)) / (v2 * a)};

    std::cout << "У элемента два корня" << std::endl;
    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
  }

  if (D < 0) {
    std::cout << "Дискриминант < 0, уравнение не имеет решений \n";
  }

  if (D == 0) {

    auto x{static_cast<float>(-(b)) / (v2 * a)};
    std::cout << "D = " << D << '\n';
    std::cout << "Дискриминант = 0, уравнение имеет один корень \n";
    std::cout << "x = " << x << std::endl;
  }
  return 0;
}
