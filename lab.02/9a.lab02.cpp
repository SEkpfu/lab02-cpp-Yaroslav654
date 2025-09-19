#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "Введите координату х: "; cin >> x;
	cout << "Введите координату y: "; cin >> y;
	if (x >= -2 && x <= 0 && y >= 0 && y <= 1) {
		cout << "Точка принадлежит заштрихованной части полости";
	}
	else
	{
		cout << "Точка не принадлежит заштрихованной части полости";
	}
}