#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double r, a, b;
	cout << "������ ����� = "; cin >> r;
	cout << "������ ������� �������������� = "; cin >> a;
	cout << "������ ������� �������������� = "; cin >> b;
	if ((r * 2 <= a) && (r * 2 <= b)) {
		cout << "���� ����������� � �������";
	}
	else
	{
		cout << "���� �� ����������� � �������";
	}
}