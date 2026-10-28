#include <iostream>
#include <cmath>
//#include <locale>
#include <windows.h>

int main() {
	// Чомусь setlocale з підєднаною бібліотекою не працює
	//setlocale(LC_ALL, "uk_UA");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const double PI = 3.141592653589793;
	
	//   Вправа_1
	double y, z, alfa, useralfa;
	std::cout << "Введіть значення кута А в градусах: ";
	std::cin >> useralfa;

	alfa = useralfa * (PI / 180);
	y = 2 * pow(sin(3 * PI - 2 * alfa), 2) * pow(cos(5 * PI + 2 * alfa), 2);
	z = 0.25 - 0.25 * sin(2.5 * PI - 8 * alfa);

	std::cout << "Відповідь y: " << y << std::endl;
	std::cout << "Відповідь z: " << z << '\n';
	std::cout << "Різниця y - z: " << y - z;
	
	//   Вправа_7
	/*
	double y, z, alfa, out, roundout;
	std::cout << "Введіть значення кута А в градусах: ";
	std::cin >> alfa;

	alfa = alfa * (PI / 180);
	y = pow(cos(0.375 * PI - alfa / 4), 2) - pow(cos(1.375 * PI + alfa / 4), 2);
	z = (sqrt(2) / 2) * sin(alfa / 2);

	out = y - z;
	roundout = round(out * 10000) / 10000;

	std::cout << "Знак '~' - приблизно " << std::endl << '\n';
	std::cout << "Відповідь y ~ " << y << std::endl;
	std::cout << "Відповідь z ~ " << z << std::endl;
	std::cout << "Різниця y та z ~ " << out << std::endl;
	std::cout << "Різниця y та z після округлення ~ " << roundout;
	*/
	return 0;
}