#include <iostream>
#include "Numbers.h"


int NumberVvod()
{
	// Функция 0 Запрос на ввод числа
	std::cout << "Enter a number: " << "\n";
	std::cin >> N;
	return N;
}

void Numbers1()
{
	// Функция 1 поиск всех нечетных цифр
	std::cout << "All Odd numbers up to: " << "\n";
	i = 0;
	while (i <= N)
	{
		if (i % 2 > 0)
			std::cout << i << ", ";
		i = i++;
	}

}

void Numbers2()
{
	// Функция 2 поиск всех четных цифр
	std::cout << "All even numbers up to: " << "\n";
	while (i <= N)
	{
		if (i % 2 == 0)
			std::cout << i << ", ";
		i = i++;
	}
	std::cout << "\n";

}





