// Lab_03_3.cpp
// <Роговська Ірина >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
		double R2; // вхідний параметр
		double R1; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R2 = "; cin >> R2;
	cout << "R1 = "; cin >> R1;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -6)
		y = R2 / 2;
	else
		if (-6 < x && x <= -2*R2)
			y = (-R2 * (2 * R2 - x)) / (-4 * R2 + 12);
		else
			if (-2*R2 < x && x <= 0)
				y = sqrt(R2 * R2 - ((x + R2) * (x + R2)));
			else
				if (0 < x && x <= 2*R1)
					y = sqrt(R1 * R1 - (x - R1) * (x - R1));
				else
					y = (y = -R1 * x + 2*R1 * R1);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}