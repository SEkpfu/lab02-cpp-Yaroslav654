#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y, z, a, b;
	cout << "������ ������ ������� ������� = "; cin >> x;
	cout << "������ ������ ������� ������� = "; cin >> y;
	cout << "������ ������� ������� ������� = "; cin >> z;
	cout << "������ ������ ������� ��������� = "; cin >> a;
	cout << "������ ������ ������� ��������� = "; cin >> b;
	if ((min(x, y) <= min(a, b) && max(x, y) <= max(a, b)) || (min(x, z) <= min(a, b) && max(x, z) <= max(a, b)) || (min(z, y) <= min(a, b) && max(z, y) <= max(a, b))) {
		cout << "������ ������� ����� ���������";
	}
	else
	{
		cout << "������ �� ������� ����� ���������";
	}

}