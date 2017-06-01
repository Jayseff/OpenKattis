#include <iostream>
using namespace std; 

int main()
{
	int hours = 0, minutes = 0; 

	cin >> hours >> minutes; 

	minutes -= 45; 

	if (minutes < 0)
	{
		hours -= 1; 
		minutes = 60 + minutes; 
	}

	if (hours < 0)
		hours = 23; 
	

	cout << hours << " " << minutes; 

	return 0; 
}