#include <iostream>

using namespace std; 

int main()
{
	int size; 

	cin >> size; 

	int *array = new int[size]; 

		for (int i = 0; i < size; i++)
		{
			cin >> array[i]; 

			if (array[i] % 2 == 0)
				cout << array[i] << " is even" << endl;
			else
				cout << array[i] << " is odd" << endl; 
		}

	return 0; 
}