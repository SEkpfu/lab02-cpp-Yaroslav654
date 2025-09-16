#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "Введите координату х: "; cin >> x;
	cout << "Введите координату y: "; cin >> y;
	if (x >= -5 && x <= 5 && y >= 0 && y <= sqrt(25 - x * x)) {
		cout << "Точка принадлежит заштрихованной части полости";
	}
	else
	{
		cout << "Точка не принадлежит заштрихованной части полости";
	}
}