#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "������� ���������� �: "; cin >> x;
	cout << "������� ���������� y: "; cin >> y;
	if (((x >= -4 && x < -2) || (x > 2 && x <= 4)) && ((y <= 4 && y > 2) || (y < -2 && y >= -4))) {
		cout << "������ 5 �����";
	}
	else
	{
		if ((x >= -2 && x <= 2) && (y <= 2 && y >= -2)) {
			cout << "������ 10 �����";
		}
		else
		{
			cout << "������ 0 �����";
		}
	}
}