#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	double x;
	cout << "¬ведите х: "; cin >> x;
	if (x > 0) {
		cout << "t = " << (2 - x * x) / x;
	}
	else if (x <= -1) {
		cout << "t = " << (cos(M_PI * abs(x))) / x;
	}
	else
	{
		cout << "t = " << 7 / 3 + sqrt(x + 1);
	}
}