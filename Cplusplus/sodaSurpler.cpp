#include <iostream>

using namespace std; 

int main()
{
	int e, f, c;
	int totalSodas = 0; 

	cin >> e >> f >> c; 

	int bottles = e + f; 

	do {
		totalSodas += (bottles / c);
		bottles = bottles % c + bottles / c;  // remainder + bottles gained after drinking

	} while (bottles >= c);

	cout << totalSodas; 
	return 0; 
}