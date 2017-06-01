#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
	double cost, lawns, total = 0.0, width, length; 


	cin >> cost >> lawns; 

	for (int i = 0; i < lawns; i++)
	{
		cin >> width >> length; 

		total = cost * length * width + total; 
	}

	cout << setprecision(8) << total; 
 

	return 0; 
}