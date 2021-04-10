#include <iostream>
#include <string>

int main()
{
    std::string line("Reversed string");
    unsigned int i{};
    unsigned int j{ line.size() - 1 };

    std::cout << line << std::endl << std::endl;

    while (j > i) {

        char temp;
        temp = line[j];
        line[j] = line[i];
        line[i] = temp;
        ++i;
        --j;
    }

    std::cout << line << std::endl;
    return 0;

}
