#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double r, a, b;
	cout << "Радиус торта = "; cin >> r;
	cout << "Первая сторона прямоугольника = "; cin >> a;
	cout << "Вторая сторона прямоугольника = "; cin >> b;
	if ((r * 2 <= a) && (r * 2 <= b)) {
		cout << "Торт поместиться в коробку";
	}
	else
	{
		cout << "Торт не поместиться в коробку";
	}
}