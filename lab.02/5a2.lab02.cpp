#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double r, a, b, c, z;
	cout << "Радиус торта = "; cin >> r;
	cout << "Высота торта = "; cin >> z;
	cout << "Первая сторона прямоугольной коробки = "; cin >> a;
	cout << "Вторая сторона прямоугольной коробки = "; cin >> b;
	cout << "Высота прямоугольной коробки = "; cin >> c;
	if ((r * 2 <= a) && (r * 2 <= b) && (z <= c)) {
		cout << "Торт поместиться в коробку";
	}
	else
	{
		cout << "Торт не поместиться в коробку";
	}
}