#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y, z;
	cout << "������� ������������� ������������� ����� "; cin >> x;
	cout << "������� ������������� ������������� ����� "; cin >> y;
	cout << "������� ������������� ������������� ����� "; cin >> z;
	if (x + y > z && x + z > y && y + z > x) {
		cout << "����������� ����������." << endl;
	}
	else
	{
		cout << "����������� �� ����������.";
	}

	if (x == y && y == z) {
		cout << "����������� ��������������." << endl;
	}
	else if (x == y || y == z || z == x) {
		cout << "����������� ��������������." << endl;
	}

	double mx, sr, mn;
	mx = max(x, max(y, z));
	mn = min(x, min(y, z));
	sr = x + y + z - mx - mn;
	if (mx * mx == mn * mn + sr * sr) {
		cout << "����������� �������������." << endl;
	}
}