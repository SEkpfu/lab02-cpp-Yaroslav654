#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int x;
	cout << "������� ����� ����� "; cin >> x;
	if (x > 0) {
		cout << "��� ������������� �����" << endl;
	}
	else
	{
		if (x == 0) {
			cout << "��� ����� ����� ����" << endl;
		}
		if (x < 0) {
			cout << "��� ������������� �����" << endl;
		}
	}
	if (x % 2 == 0) {
		cout << "��� ������ �����";
	}
	else
	{
		cout << "��� �������� �����";
	}
}