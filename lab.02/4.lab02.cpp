#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int d, n;
	cout << "Введите дату" << endl;
	cout << "День месяца: "; cin >> d;
	cout << "Номер дня недели: "; cin >> n;
	if (((13 == d) && (5 == n || 2 == n)) || ((17 == d) && (5 == n))) {
		cout << "Неудачный день";
	}

}