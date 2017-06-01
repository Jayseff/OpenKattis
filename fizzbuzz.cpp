#include <iostream>

using namespace std; 

int main()
{
	int first, second, third; 

	cin >> first >> second >> third; 

	for (int i = 1; i <= third; i++)
	{
		if (i % first == 0)
			cout << "Fizz"; 
		if (i % second == 0)
			cout << "Buzz";
		if (i % first != 0 && i % second != 0)
			cout << i; 

		cout << endl; 
	}

	return 0; 
}