#include <iostream>
#include "Numbers.h"


int NumberVvod()
{
	// ������� 0 ������ �� ���� �����
	std::cout << "Enter a number: " << "\n";
	std::cin >> N;
	return N;
}

void Numbers1()
{
	// ������� 1 ����� ���� �������� ����
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
	// ������� 2 ����� ���� ������ ����
	std::cout << "All even numbers up to: " << "\n";
	while (i <= N)
	{
		if (i % 2 == 0)
			std::cout << i << ", ";
		i = i++;
	}
	std::cout << "\n";

}





