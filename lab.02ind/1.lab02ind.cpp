#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a, b;
	int n;
	cout << "������� ������������� ����� "; cin >> a;
	cout << "������� ������������� ����� �� ������� 0 "; cin >> b;
	cout << "������� ����� �� 1 �� 4 "; cin >> n;
	switch (n) {
	case(1): cout << "A + B = " << a + b; break;
	case(2): cout << "A - B = " << a - b; break;
	case(3): cout << "A * B = " << a * b; break;
	case(4): cout << "A / B = " << a / b; break;
	}
}