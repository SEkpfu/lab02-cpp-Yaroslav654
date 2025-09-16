#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "Введите координату х: "; cin >> x;
	cout << "Введите координату y: "; cin >> y;
	if (((x >= -4 && x < -2) || (x > 2 && x <= 4)) && ((y <= 4 && y > 2) || (y < -2 && y >= -4))) {
		cout << "Выбито 5 очков";
	}
	else
	{
		if ((x >= -2 && x <= 2) && (y <= 2 && y >= -2)) {
			cout << "Выбито 10 очков";
		}
		else
		{
			cout << "Выбито 0 очков";
		}
	}
}