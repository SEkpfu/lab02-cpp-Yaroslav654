#include <iostream>
using namespace std;
int main()
{
	int n;
	setlocale(0, "");
	cout << "������� ����� ����� �����: "; cin >> n;
	string end;
	if (n % 10 == 1 && n % 100 != 11) {
		end = "��";
	}
	else if (n % 10 >= 2 && n % 10 <= 4 && !(n % 100 >= 12 && n % 100 <= 14)) {
		end = "��";
	}
	else {
		end = "��";
	}
	cout << "��������� �������� " << n << " ���" << end;
}