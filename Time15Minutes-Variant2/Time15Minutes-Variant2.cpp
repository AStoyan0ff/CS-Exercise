#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const int BONUS_MINUTES = 15;

	int hours, minutes;
	cin >> hours >> minutes;

	int hoursInMinutes = hours * 60;
	minutes += hoursInMinutes + BONUS_MINUTES;

	int newHours = minutes / 60 % 24;
	int newMinutes = minutes % 60;

	cout << newHours << ':' << setw(2) << setfill('0') << newMinutes << '\n';
}
	