#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	char zn;
	cout << "Введите первое число: "; cin >> x;
	cout << "Введите второе число: "; cin >> y;
	cout << "Введите знак арифмитической операции: "; cin >> zn;
	switch (zn) {
	case '+': cout << "Результат = " << x + y; break;
	case '-': cout << "Результат = " << x - y; break;
	case '*': cout << "Результат = " << x * y; break;
	default: cout << "Не верные данные";
	}
}