#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "������� ���������� �: "; cin >> x;
	cout << "������� ���������� y: "; cin >> y;
	if (x >= -2 && x <= 0 && y >= 0 && y <= 1) {
		cout << "����� ����������� �������������� ����� �������";
	}
	else
	{
		cout << "����� �� ����������� �������������� ����� �������";
	}
}