#include <cmath>
#include <iostream>

int main() {
    constexpr int minRange{ 1 };
    constexpr int maxRange{ 255 };
    constexpr int val1{ 4 };
    constexpr int val2{ 2 };

    std::cout << "Quadratic equation looks like: a*x^2 + b*x + c = 0, where 'a' "
        "doesn't equal 0 "
        << '\n';

    std::cout << "Please enter 'a' value in range [" << minRange << "..."
        << maxRange << "]:\t";
    int a{};
    std::cin >> a;

    if (a > maxRange || a < minRange) {
        std::cout << "Incorrect input a";
        return -1;
    }

    std::cout << "Please enter 'b' value in range [" << minRange << "..."
        << maxRange << "]:\t";
    int b{};
    std::cin >> b;

    if (b > maxRange || b < minRange) {
        std::cout << "Incorrect input b\n";
        return -1;
    }

    std::cout << "Please enter 'c' value in range [" << minRange << "..."
        << maxRange << "]:\t";

    int c{};
    std::cin >> c;

    if (c > maxRange || c < minRange) {
        std::cout << "Incorrect input c\n";
        return -1;
    }

    std::cout << "In order to find roots of the equation, you have to calculate "
        "its discriminant\n";
    std::cout << "General view of the discriminant is: D = b^2 - (4 * a * c)\n";

    int D{ (b * b) - (val1 * a * c) };

    if (D > 0) {

        std::cout << "D = " << D << '\n';
        std::cout << "This equation has 2 roots x1 and x2:" << '\n';
        float x1 = static_cast<float>((-b) + sqrt(D)) / (val2 * a);
        float x2 = static_cast<float>((-b) - sqrt(D)) / (val2 * a);
        std::cout << "x1 = " << x1 << '\n';
        std::cout << "x2 = " << x2 << '\n';

        return 0;
    }

    if (D == 0) {

        std::cout << "D = " << D << '\n';
        std::cout << "The discriminant equals '0'. Regarding this, the equation "
            "has only one root!\n";
        float x = static_cast<float>(-(b)) / (val2 * a);
        std::cout << "x = " << x << '\n';

        return 0;
    }

    if (D < 0) {
        std::cout << "Descriminant is lower than 0!!! \nThis equation has no "
            "solutions!\n";
    }

    return 0;
}
