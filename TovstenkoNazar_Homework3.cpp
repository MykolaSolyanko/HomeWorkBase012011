#include <iostream>
#include <array>
#include <random> 
#include <ctime>
constexpr int kSize{ 6 };

void reverseStr(std::string& str)
{
	int len = str.length();
	for (int i = 0; i < len / 2; i++)
	{
		std::swap(str[i], str[len - i - 1]);
	}	
	std::cout << "Reverse string is: " << str << std::endl;
}

void ToUpper(std::string& str)
{
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	std::cout << "Upper string is: " << str << std::endl;
}

void ToLower(std::string& str)
{
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	std::cout << "Lower string is: " << str << std::endl;
}

void IsDigit(std::string& str)
{
	int len = str.length();
	std::string digit_str{};

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			digit_str += str[i];
		}
	}
	std::cout << "Digit string is: " << digit_str << std::endl;
}

void FillArray(std::array<int, kSize>& arr)
{
	std::mt19937 gen(time(0));
	std::uniform_int_distribution<> uid(0, 20);
	for (int i = 0; i < kSize; i++) {
		arr[i] = uid(gen);
	}
}

void PrintArray(std::array<int, kSize>& arr)
{
	for (int i = 0; i < kSize; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void FillAndSortArray(std::array<int, kSize>& arr)
{
	std::cout << "Enter " << kSize << " elements in your arr" << std::endl;

	FillArray(arr);
	PrintArray(arr);

	std::sort(arr.begin(), arr.end());
	std::cout << " Array after sort: " << std::endl;
	PrintArray(arr);
	
}

int main()
{
	std::cout << "Input\n 1) Reverse string\n 2) String to UPPERCASE\n 3) String to lowercase\n ";
	std::cout << "4) Is string digit? \n 5) Fill and sort array\n";
	int input{};
	std::cin >> input;
	switch (input)
	{
	case(1):
	{
		std::cout << "Reverse string" << std::endl;
		std::cout << "Enter a string" << std::endl;
		std::string str{};
		std::cin >> str;
		reverseStr(str);
		break;
	}
	case(2):
	{
		std::cout << "String to UPPERCASE" << std::endl;
		std::cout << "Enter a string" << std::endl;
		std::string str{};
		std::cin >> str;
		ToUpper(str);
		break;

	}
	case(3):
	{
		std::cout << "String to lowercase" << std::endl;
		std::cout << "Enter a string" << std::endl;
		std::string str{};
		std::cin >> str;
		ToLower(str);
		break;

	}
	case(4):
	{
		std::cout << "Is digit" << std::endl;
		std::cout << "Enter a string" << std::endl;
		std::string str{};
		std::cin >> str;
		IsDigit(str);
		break;

	}
	case(5):
	{
		std::cout << "Fill and sort array" << std::endl;
		std::array<int, 6> arr{};
		FillAndSortArray(arr);
		break;
	}
	default:
		std::cout << "Incorect input" << std::endl;
		break;
	}
}