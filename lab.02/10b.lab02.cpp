#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y, z;
	cout << "Введите дейстительное положительное число "; cin >> x;
	cout << "Введите дейстительное положительное число "; cin >> y;
	cout << "Введите дейстительное положительное число "; cin >> z;
	if (x + y > z && x + z > y && y + z > x) {
		cout << "Треугольник существует." << endl;
	}
	else
	{
		cout << "Треугольник не существует.";
	}

	if (x == y && y == z) {
		cout << "Треугольник равносторонний." << endl;
	}
	else if (x == y || y == z || z == x) {
		cout << "Треугольник равнобедренный." << endl;
	}

	double mx, sr, mn;
	mx = max(x, max(y, z));
	mn = min(x, min(y, z));
	sr = x + y + z - mx - mn;
	if (mx * mx == mn * mn + sr * sr) {
		cout << "Треугольник прямоугольный." << endl;
	}
}