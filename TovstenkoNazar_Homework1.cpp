#include <cmath>
#include <iostream>

int main() {
	constexpr int four{ 4 };
	constexpr int two{ 2 };
	constexpr int nMax{ 322 };
	constexpr int nMin{ -322 };

	std::cout << "Enter number, not equal to zero and in range [" << nMin << "..."
		<< nMax << "]" << std::endl;
	double a{};
	std::cout << "A=";
	std::cin >> a;

	if (a > nMax || a < nMin || a == 0) {
		std::cout << "Wrong input" << std::endl;
		return -1;
	}

	std::cout << "Enter number in range [" << nMin << "..." << nMax << "]"
		<< std::endl;
	double b{};
	std::cout << "B=";
	std::cin >> b;

	if (b > nMax || b < nMin) {
		std::cout << "Wrong input" << std::endl;
		return -1;
	}

	std::cout << "Enter number in range [" << nMin << "..." << nMax << "]"
		<< std::endl;
	double c{};
	std::cout << "C=";
	std::cin >> c;

	if (c > nMax || c < nMin) {
		std::cout << "Wrong input" << std::endl;
		return -1;
	}

	double D{ b * b + four * a * c };
	std::cout << "D = " << D << std::endl;
	double x1{}, x2{};
	if (D > 0) {
		x1 = ((-b) + sqrt(D)) / (two * a);
		x2 = ((-b) - sqrt(D)) / (two * a);
		std::cout << "x1 = " << x1 << std::endl;
		std::cout << "x2 = " << x2 << std::endl;
	}
	else if (D == 0) {
		x1 = -(b / (two * a));
		std::cout << "x1 = x2 = " << x1 << std::endl;
	}
	else {
		std::cout << "D < 0, There are no real roots of the equation";
	}
}
