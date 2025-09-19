#include <iostream>
using namespace std;
int main()
{
	int n;
	setlocale(0, "");
	cout << "¬ведите целое число ложек: "; cin >> n;
	string end;
	if (n % 10 == 1 && n % 100 != 11) {
		end = "ка";
	}
	else if (n % 10 >= 2 && n % 10 <= 4 && !(n % 100 >= 12 && n % 100 <= 14)) {
		end = "ки";
	}
	else {
		end = "ек";
	}
	cout << "ƒульсине€ спр€тала " << n << " лож" << end;
}