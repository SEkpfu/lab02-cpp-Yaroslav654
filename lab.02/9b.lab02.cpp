#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "������� ���������� �: "; cin >> x;
	cout << "������� ���������� y: "; cin >> y;
	if (x >= -5 && x <= 5 && y >= 0 && y <= sqrt(25 - x * x)) {
		cout << "����� ����������� �������������� ����� �������";
	}
	else
	{
		cout << "����� �� ����������� �������������� ����� �������";
	}
}