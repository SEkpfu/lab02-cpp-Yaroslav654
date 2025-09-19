#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y, z, a, b;
	cout << "Длинна первой стороны кирпича = "; cin >> x;
	cout << "Длинна второй стороны кирпича = "; cin >> y;
	cout << "Длинна третьей стороны кирпича = "; cin >> z;
	cout << "Длинна первой стороны отверстия = "; cin >> a;
	cout << "Длинна второй стороны отверстия = "; cin >> b;
	if ((min(x, y) <= min(a, b) && max(x, y) <= max(a, b)) || (min(x, z) <= min(a, b) && max(x, z) <= max(a, b)) || (min(z, y) <= min(a, b) && max(z, y) <= max(a, b))) {
		cout << "Кирпич пройдет через отверстие";
	}
	else
	{
		cout << "Кирпич не пройдет через отверстие";
	}

}