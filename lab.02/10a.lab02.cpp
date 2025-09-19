#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y, z;
	cout << "¬ведите координату х: "; cin >> x;
	cout << "¬ведите координату y: "; cin >> y;
	cout << "¬ведите координату z: "; cin >> z;
	if (x + y > z && x + z > y && y + z > x) {
		cout << "“реугольник существует.";
	}
	else
	{
		cout << "“реугольник не существует.";
	}
}