#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	char zn;
	cout << "������� ������ �����: "; cin >> x;
	cout << "������� ������ �����: "; cin >> y;
	cout << "������� ���� �������������� ��������: "; cin >> zn;
	switch (zn) {
	case '+': cout << "��������� = " << x + y; break;
	case '-': cout << "��������� = " << x - y; break;
	case '*': cout << "��������� = " << x * y; break;
	default: cout << "�� ������ ������";
	}
}