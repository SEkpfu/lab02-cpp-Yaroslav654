#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "������� ���������� �: "; cin >> x;
	cout << "������� ���������� y: "; cin >> y;
	bool p1 = (y >= 0 && y <= 2);
	bool p2 = (x >= 0 && x <= 1);
	bool p3 = (y <= -2 * x + 2);
	if (p1 && p2 && p3) {
		cout << "����� ����������� �������������� ����� �������";
	}
	else
	{
		cout << "����� �� ����������� �������������� ����� �������";
	}
}