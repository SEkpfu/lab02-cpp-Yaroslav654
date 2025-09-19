#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int x;
	cout << "Введите целое число "; cin >> x;
	if (x > 0) {
		cout << "Это положительное число" << endl;
	}
	else
	{
		if (x == 0) {
			cout << "Это число равно нулю" << endl;
		}
		if (x < 0) {
			cout << "Это отрицательное число" << endl;
		}
	}
	if (x % 2 == 0) {
		cout << "Это четное число";
	}
	else
	{
		cout << "Это нечетное число";
	}
}