#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int bd, bm, by;
	cout << "������� ���� �������� (���� ����� ���): ";
	cin >> bd >> bm >> by;
	int nd, nm, ny;
	cout << "������� ������� ���� (���� ����� ���): ";
	cin >> nd >> nm >> ny;
	int age = ny - by;
	if (nm < bm || (nm == bm && nd < bd)) {
		age--;
	}
	string year;
	if (age % 10 == 1 && age % 100 != 11) {
		year = "���";
	}
	else if (age % 10 >= 2 && age % 10 <= 4 && (age % 100 < 10 || age % 100 >= 20)) {
		year = "����";
	}
	else {
		year = "���";
	}
	cout << "��� " << age << " " << year;
}