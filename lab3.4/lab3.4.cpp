// Lab3.4.cpp
// < Шарафан Максим >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 19


#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((x >= -2 * R && y >= -x - 2 * R) ||
		(x >= 0 && x <= 2 * R && y <= sqrt(R * R - x * x)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}