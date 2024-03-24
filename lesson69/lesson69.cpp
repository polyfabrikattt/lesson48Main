//task01
#include <iostream>
using namespace std;

int main()
{

	int a, b, c, tables;

	cout << "Input 3 numbers:";

	cin >> a >> b >> c;

	tables = (a - 1) / 2 + 1 + (b - 1) / 2 + 1 + (c - 1) / 2 + 41;

	cout << tables;

	return 0;
