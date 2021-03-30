//Let's plant a fir-tree, shall we?

#include <iostream>

int main() {
    int rows{}, i{}, j{}, space{};

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    for (i = 1; i <= rows; i++) {
        // this loop will display space
        for (space = i; space < rows; space++) {
            std::cout << " ";
        }
        // for loop to display star equal to row number
        for (j = 1; j <= (2 * i - 1); j++) {
            std::cout << "*";
        }

        std::cout << "\n";
    }

    return 0;
}
