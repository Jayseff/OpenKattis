#include <iostream>

using namespace std; 

int main()
{
	int dataSet, speed, hours = 0, miles = 0, prevHours = 0; 

	do
	{
		cin >> dataSet; 

		for (int i = 0; i < dataSet; i++)
		{
			cin >> speed >> hours; 
			int temp = hours; 
			hours = hours - prevHours; 
			miles = speed * hours + miles; 
			prevHours = temp;
		}
		
		if (dataSet != -1)
			cout << miles << " miles" << endl; 

		miles = 0; 

	} while (dataSet != -1); // continues until user enters -1

	return 0; 
}