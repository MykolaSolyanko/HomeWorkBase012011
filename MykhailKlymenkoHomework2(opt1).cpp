//Let's plant a fir-tree, shall we?

#include <iostream>

int main() {
    int rows{}, i{}, j{}, space{};
    std::cout << "This program builds a fir-tree" << std::endl;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    for (i = 1; i <= rows; i++) {
        // this loop will display space
        for (space = i; space < rows; space++) {
            std::cout << " ";
        }
        // for loop to display star equal to row number
        const int fillStars{ 2 * i - 1 };
        for (j = 1; j <= fillStars; j++) {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}
