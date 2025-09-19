#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a, b;
	int n;
	cout << "¬ведите дейстительное число "; cin >> a;
	cout << "¬ведите дейстительное число не равноке 0 "; cin >> b;
	cout << "¬ведите число от 1 до 4 "; cin >> n;
	switch (n) {
	case(1): cout << "A + B = " << a + b; break;
	case(2): cout << "A - B = " << a - b; break;
	case(3): cout << "A * B = " << a * b; break;
	case(4): cout << "A / B = " << a / b; break;
	}
}