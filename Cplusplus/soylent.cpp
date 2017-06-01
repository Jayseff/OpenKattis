#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int data_size;
	double calories;

	cin >> data_size;

	for (int i = 0; i < data_size; i++)
	{
		cin >> calories;

		cout << ceil(calories / 400) << endl;
	}

	return 0;
}