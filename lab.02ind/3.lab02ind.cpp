#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "Введите координату х: "; cin >> x;
	cout << "Введите координату y: "; cin >> y;
	bool p1 = (x <= 0 && y <= 0.5 * x + 1 && y >= 0);
	bool p2 = (x <= 2 && y <= -0.5 * x + 1 && y >= 0);
	bool p3 = (x <= 0 && y <= 0 && y >= -x - 2);
	bool p4 = (x >= 0 && x <= 2 && y <= 0);
	bool p5 = (y * y <= 4 - x * x);
	bool p = (p4 && p5);
	if (p1 || p2 || p3 || p) {
		cout << "Точка принадлежит заштрихованной части полости";
	}
	else
	{
		cout << "Точка не принадлежит заштрихованной части полости";
	}

}