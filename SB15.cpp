#include <iostream>

int main()
{
	const int N = 20; 
	int i = 0;
	
	// Блок 1 поиск всех четных цифр
	std::cout << "All even numbers up to: " << N << "\n";
	while (i <= N)
	{
		i = i++;
		if (i % 2 == 0)
		std::cout << i << ", ";
	}
	std::cout << "\n";

	// Блок 1 поиск всех нечетных цифр
	std::cout << "All Odd numbers up to: " << N << "\n";
	i = 0;
	while (i <= N)
	{
		if (i % 2 > 0)
		std::cout << i << ", ";
		i = i++;
	}
	std::cout << "\n";


}


