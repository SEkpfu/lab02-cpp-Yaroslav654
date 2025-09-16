#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	double x;
	cout << "Введите х: "; cin >> x;
	double f = 1. / (x * x + 4 * x - 5);
	if (x <= -2) {
		cout << "f(x) = " << 0;
	}
	else {
		if (x > 0) {
			if (isnan(f) || isinf(f))
				cout << "Результат является не числовым";
			else
			{
				cout << "f(x) = " << 1. / (x * x + 4 * x - 5);
			}
		}
		else
		{
			cout << "f(x) = " << x * x + 4 * x + 5;
		}
	}
}