#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int bd, bm, by;
	cout << "¬ведите дату рождени€ (день мес€ц год): ";
	cin >> bd >> bm >> by;
	int nd, nm, ny;
	cout << "¬ведите текущую дату (день мес€ц год): ";
	cin >> nd >> nm >> ny;
	int age = ny - by;
	if (nm < bm || (nm == bm && nd < bd)) {
		age--;
	}
	string year;
	if (age % 10 == 1 && age % 100 != 11) {
		year = "год";
	}
	else if (age % 10 >= 2 && age % 10 <= 4 && (age % 100 < 10 || age % 100 >= 20)) {
		year = "года";
	}
	else {
		year = "лет";
	}
	cout << "¬ам " << age << " " << year;
}