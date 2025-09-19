#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x;
	cout << "¬ведите х: "; cin >> x;
	if (x <= -2) {
		cout << "f(x) = " << 0;
	}
	else {
		if (x > 10) {
			cout << "f(x) = " << 1. / (x * x + 4 * x - 5);
		}
		else
		{
			cout << "f(x) = " << x * x + 4 * x + 5;
		}
	}
}