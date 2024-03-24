//task02

#include <iostream>
using namespace std;

int main() {
	int number, hours, minutes, seconds;
	cout << "input you number";
	cin >> number;

	hours = number / 3600;
	number -= hours * 3600;

	minutes = number / 60;
	number -= minutes * 60;

	seconds = number;

	cout << hours % 24 << ":";
	cout << minutes / 10 << minutes % 10 << ":";
	cout << seconds / 10 << seconds % 10;
	return 0;