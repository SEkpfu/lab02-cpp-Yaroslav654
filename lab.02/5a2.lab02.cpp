#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double r, a, b, c, z;
	cout << "������ ����� = "; cin >> r;
	cout << "������ ����� = "; cin >> z;
	cout << "������ ������� ������������� ������� = "; cin >> a;
	cout << "������ ������� ������������� ������� = "; cin >> b;
	cout << "������ ������������� ������� = "; cin >> c;
	if ((r * 2 <= a) && (r * 2 <= b) && (z <= c)) {
		cout << "���� ����������� � �������";
	}
	else
	{
		cout << "���� �� ����������� � �������";
	}
}