#include <iostream>

using namespace std; 

int main()
{
	int first, second, third; 

	cin >> first >> second >> third; 

	if (first + second == third)
		cout << first << "+" << second << "=" << third << endl; 
	if (first - second == third)
		cout << first << "-" << second << "=" << third << endl; 
	if (first / second == third)
		cout << first << "/" << second << "=" << third << endl; 
	if (first * second == third)
		cout << first << "*" << second << "=" << third << endl; 

	if (first == second + third)
		cout << first << "=" << second << "+" << third << endl;
	if (first == second - third)
		cout << first << "=" << second << "-" << third << endl; 
	if (first == second / third)
		cout << first << "=" << second << "/" << third << endl;
	if (first == second * third)
		cout << first << "=" << second << "*" << third << endl; 


	return 0;
}