#include <iostream>
#include "Numbers.h"

void Numbers(int N, bool even)
{
	if (!even)
	{
		// Функция поиск всех нечетных цифр или четных цифр
		std::cout << "All Odd numbers up to: " << "\n";
		int i = 1;
		while (i <= N)
		{
			if (i % 2 > 0)
				std::cout << i << ", ";
			i = i++;
		}

	}
	else
	{
		// Функция 2 поиск всех четных цифр
		int i = 1;
		std::cout << "All even numbers up to: " << "\n";
		while (i <= N)
		{
			if (i % 2 == 0)
				std::cout << i << ", ";
			i = i++;
		}


	}

}

int main()
{
	int N;
	std::cout << "Enter a number: " << "\n";
	std::cin >> N;

	//    Затем передаем значения в функцию

	Numbers(N, true);//вывод четных чисел от 0 до N
	Numbers(10, false); //вывод нечетных числе от 0 до 10

}