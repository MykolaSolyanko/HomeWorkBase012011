#include <cmath>
#include <iostream>

int main() {
    constexpr int minValue{ 1 };
    constexpr int maxValue{ 100 };

    std::cout << "Please enter 'a' number [" << minValue << "..." << maxValue
        << "]\n";
    int a{};
    std::cin >> a;

    if (a > maxValue || a < minValue) {
        std::cout << "Incorrect input a\n";
        return -1;
    }

    std::cout << "Please enter 'b' number [" << minValue << "..." << maxValue
        << "]\n";
    int b{};
    std::cin >> b;

    if (b > maxValue || b < minValue) {
        std::cout << "Incorrect input b\n";
        return -1;
    }

    std::cout << "Please enter 'c' number [" << minValue << "..." << maxValue
        << "]\n";
    int c{};
    std::cin >> c;

    if (c > maxValue || c < minValue) {
        std::cout << "Incorrect input c\n";
        return -1;
    }

    int D{}, x{}, x1{}, x2{};
    D = (b * b) - (4 * a * c);

    if (D > 0) {

        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        std::cout << "D = " << D << "\n";
        std::cout << "x1 = " << x1 << "\n";
        std::cout << "x2 = " << x2 << "\n";
    }

    if (D == 0) {
        x = -(b / (2 * b));
        std::cout << "D = " << D << "\n";
        std::cout << "x1 = " << x << "\n";
    }
    if (D < 0) {
        std::cout << "D = " << D << "\n";
        std::cout << "D < 0!!! \nThis equation has no solutions!\n";
    }
}
