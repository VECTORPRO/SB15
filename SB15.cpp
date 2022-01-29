#include <iostream>

int main()
{
	int N = 20; 
	int i = 1;
	
	// Блок 0 Запрос на ввод числа
	std::cout << "Enter a number: " << "\n";
	std::cin >> N;

	// Блок 1 поиск всех четных цифр
	std::cout << "All even numbers up to: " << N << "\n";
	while (i <= N)
	{
		if (i % 2 == 0)
		std::cout << i << ", ";
		i = i++;
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


