#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "Введите координату х: "; cin >> x;
	cout << "Введите координату y: "; cin >> y;
	bool p1 = (x * x + y * y <= 36);
	bool p2 = (x * x + y * y > 9);
	bool p3 = (x >= 0);
	if (p1 && p2 && p3) {
		cout << "Точка принадлежит заштрихованной части полости";
	}
	else
	{
		cout << "Точка не принадлежит заштрихованной части полости";
	}
}