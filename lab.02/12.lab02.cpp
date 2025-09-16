#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "Введите три целых числа "; cin >> a >> b >> c;
	int sum = 0;
	if (a > 10) sum += a;
	if (b > 10) sum += b;
	if (c > 10) sum += c;
	cout << "Сумма чисел больше 10: " << sum << endl;

	int ch = 0;
	if (a % 2 == 0) ch++;
	if (b % 2 == 0) ch++;
	if (c % 2 == 0) ch++;
	cout << "Количество четных чисел: " << ch << endl;

	int mx, mn, sr;
	mx = max(a, max(b, c));
	mn = min(a, min(b, c));
	sr = a + b + c - mx - mn;
	cout << "Среднее из чисел: " << sr << endl;

	int n;
	if (a = mn) n = 1;
	if (b = mn) n = 2;
	if (c = mn) n = 3;
	cout << "Номер наименьшего числа: " << n;
}