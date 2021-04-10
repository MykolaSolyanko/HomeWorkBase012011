#include <iostream>
void SumAndAverage(int number)
{
	int sum{};
	int counter{};
	while (number != 0)
	{
		sum += number % 10;
		number = number / 10;
		counter++;
	}
	std::cout << "Sum = " << sum << "\nAverage = " << sum / counter << std::endl;
}

void LuckyTicket(int number)
{
	constexpr int limit{ 6 };
	int digits{};
	int sum1{};
	int sum2{};

	while (number != 0)
	{
		constexpr int limit2{ 3 };
		digits++;
		if (digits <= limit2)
		{
			sum2 += number % 10;
		}
		else
		{
			sum1 += number % 10;
		}
		number /= 10;
	}
	if (digits != limit)
	{
		return;
	}

	if (sum1 == sum2)
	{
		std::cout << "You bought a lucky ticket!!!" << std::endl;
	}
	else
	{
		std::cout << "Your ticket is not lucky :(" << std::endl;
	}

}

void ReverseNumber(int number, int reverse_number)
{
	while (number != 0)
	{
		reverse_number *= 10;
		reverse_number += number % 10;
		number /= 10;
	}
	std::cout << "Reverse number = " << reverse_number << std::endl;
}

void SumOfOdd(int quantity)
{
	constexpr int LowLimit{ -60 };
	constexpr int HighLimit{ 90 };
	int number{};
	int sum{};
	std::cout << "Enter " << quantity << " numbers" << std::endl;
	for (int i{}; i < quantity; i++)
	{
		std::cin >> number;
		std::cout << number << std::endl;
		if ((LowLimit <= number <= HighLimit) && (number % 2 != 0))
		{
			sum += number;
		}	
	}
	std::cout << "Sum = " << sum << std::endl;
}

int BestDividerHelp(int number)
{
	int sum{};
	while (number != 0)
	{
		sum += number % 10;
		number = number / 10;
	}
	return sum;
}
void BestDivider(int number)
{
	for (int i = 1; i <= number; i++)
	{
		int divider{ number % i };
		if ( divider == 0 && i > BestDividerHelp(number))
		{
			std::cout << "Divider = " << i << std::endl;
			break;
		}
	}
}

void AmoutOfSetBits(int number)
{
	int counter{};
	while (number != 0)
	{
		counter += number & 1;
		number >>= 1;
	}
	std::cout << "Amount of set bits = " << counter << std::endl;
}

void IsSetBit(unsigned int number, unsigned int bit)
{
	number >>= bit - 1;
	if ((number & 1) == 1)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}
}

int main()
{
	std::cout << "Input\n 1) Sum and average\n 2) Lucky ticket\n 3) Reverse number\n ";
	std::cout << "4) Sum of odd numbers\n 5) Best divider\n 6) Amount of set bits\n 7) Is set bit?\n";
	int input{};
	std::cin >> input;
	switch (input)
	{
		case(1):
			{
				std::cout << "Find sum and arithmetic mean of digits in a number" << std::endl;
				std::cout << "Enter a possitive number: ";
				int number{};
				std::cin >> number;
				SumAndAverage(number);
				break;
			}
		case(2):
			{
				std::cout << "Lucky ticket" << std::endl;
				std::cout << "Enter a 6 digit number: ";
				int number{};
				std::cin >> number;
				LuckyTicket(number);
				break;
			}
		case(3):
			{
				std::cout << "Reverse number" << std::endl;
				std::cout << "Enter a number: ";
				int number{}, reverse_number{};
				std::cin >> number;
				ReverseNumber(number, reverse_number);
				break;
			}
		case(4):
			{
				std::cout << "Sum of odd numbers" << std::endl;
				std::cout << "Enter quantity of numbers" << std::endl;
				int quantity{};
				std::cin >> quantity;
				if (1 <= quantity <= 50)
				{
					SumOfOdd(quantity);
				}
				else
				{
					std::cout << "Incorect input " << std::endl;
				}
				break;
			}
		case(5):
			{
				std::cout << "Best divider" << std::endl;
				std::cout << "Enter number" << std::endl;
				int number{};
				std::cin >> number;
				BestDivider(number);
				break;
			}
		case(6):
			{
				std::cout << "Amout of set up bits" << std::endl;
				std::cout << "Enter number" << std::endl;
				int number{};
				std::cin >> number;
				AmoutOfSetBits(number);
				break;
			}
		case(7):
		{
			std::cout << "Is set bit" << std::endl;

			std::cout << "Enter number" << std::endl;
			unsigned int number{};
			std::cin >> number;

			std::cout << "Enter bit" << std::endl;
			unsigned int bit{};
			std::cin >> bit;
			IsSetBit(number, bit);
			break;
		}
		default:
			std::cout << "Incorect input" << std::endl;
			break;	
	}
}


