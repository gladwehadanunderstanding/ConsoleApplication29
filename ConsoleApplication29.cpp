#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int p[10];
	int sum = 0, maximum, max;

	cout << "Array: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Number: " << i << ":";
		cin >> p[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (p[i] > 0)
			sum += p[i];
	}
	cout << sum << endl;

	max = p[0];
	for (int i = 1; i < 10; i++) {
		if (p[i] > max) {
			max = p[i];
			maximum = i;
		}
	}
	cout << "Index fo maximum number is " << maximum << endl;
	system("pause");
	return 0;
}


