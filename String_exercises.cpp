#include <iostream>
using namespace std;
/*

int main()
{
	string word1;
	cout << "Give us a word " << endl;
	cin >> word1;

	for (int i =word1.length() ; i >=0 ; i--) {

		cout << word1[i];

	}
}
*/
/*
int main()
{
	string word1;
	int count = 0 ;
	cout << "Give us a word and we will find how much vowels it has. " << endl;
	cin >> word1;


	for (int i = 0 ; i < word1.length(); i++) {

		if (word1[i] == 'a' || word1[i] == 'e' || word1[i] == 'u' || word1[i] == 'i' || word1[i] == 'o') {
			count++;
		}
		if (word1[i] == 'A' || word1[i] == 'E' || word1[i] == 'U' || word1[i] == 'I' || word1[i] == 'O') {
			count++;
		}

	}
	cout << "There are " << count << " vowels";

	return 0;
}
*/

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


