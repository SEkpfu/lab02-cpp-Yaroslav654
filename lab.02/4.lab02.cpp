#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int d, n;
	cout << "������� ����" << endl;
	cout << "���� ������: "; cin >> d;
	cout << "����� ��� ������: "; cin >> n;
	if (((13 == d) && (5 == n || 2 == n)) || ((17 == d) && (5 == n))) {
		cout << "��������� ����";
	}

}