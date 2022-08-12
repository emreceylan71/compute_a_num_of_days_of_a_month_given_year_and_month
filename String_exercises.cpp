#include <iostream>
using namespace std;

int main() {
	int year,month;

	cout << "Enter a year." << endl;
	cin >> year;
	cout << "Enter a month." << endl;
	cin >> month;

	if (month == 1) {
		cout << "31 days";
	}
	if (month == 2) {
		if (year % 4 == 0) {
			cout << "29 days";
		}
		else {
			cout << "28 days";
		}
	}
	if (month == 3) {
		cout << "31 days";
	}
	if (month == 4) {
		cout << "30 days";
	}
	if (month == 5) {
		cout << "31 days";
	}
	if (month == 6) {
		cout << "30 days";
	}
	if (month == 7) {
		cout << "31 days";
	}
	if (month == 8) {
		cout << "31 days";
	}
	if (month == 9) {
		cout << "30 days";
	}
	if (month == 10) {
		cout << "31 days";
	}
	if (month == 11) {
		cout << "30 days";
	}
	if (month == 12) {
		cout << "31 days";
	}
	if (month > 12) {
		cout << "You entered incorrectly";
	}



}


