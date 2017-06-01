#include <iostream>
#include <string>

using namespace std; 

int main()
{
	string actions; 
	int arr[3] = {1,0,0}; 
	int temp = 0; 
	cin >> actions; 

	for (int i = 0; i < actions.length(); i++)
	{
		if (actions[i] == 'A')
		{
			temp = arr[0]; 
			arr[0] = arr[1]; 
			arr[1] = temp; 
		}
		if (actions[i] == 'B')
		{
			temp = arr[1];
			arr[1] = arr[2];
			arr[2] = temp;
		}
		if (actions[i] == 'C')
		{
			temp = arr[2];
			arr[2] = arr[0];
			arr[0] = temp;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == 1)
			cout << i + 1; 
	}
	return 0; 
}