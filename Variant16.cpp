#include <iostream>
#include <cmath>

float variant16()
{
	float x = -3, y = 1.6;	//переменные
	float f = 0;	//значение функции
	int ClientChoose = 0;	//доп. переменная для ввода данных

	std::cout << "If you want to enter X and Y, press 1: ";
	std::cin >> ClientChoose;
	if (ClientChoose == 1)
	{
		std::cout << "X: ";
		std::cin >> x;
		std::cout << "Y: ";
		std::cin >> y;
	}
	std::cout << std::endl;

	while (x >= -3 && x <= 2)	//можно было просто x <= 2, но выбранный вариант корректнее
	{
		if (x < -1)
		{
			f = x - (2.5 * y);
			std::cout << f << "; ";
		}
		if (x > -1 && x < 1)
		{
			f = pow(x, 4) + pow(sin(y), 3);
			std::cout << f << "; ";
		}
		if (x > 1)
		{
			f = (x * y) / (x + y);
			std::cout << f << "; ";
		}
		x = x + 0.3;
	}
	std::cout << std::endl << std::endl;

	return 0;
}