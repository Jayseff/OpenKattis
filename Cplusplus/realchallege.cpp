#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

int main()
{
	double area, fence; 

	cin >> area; 

	fence = sqrt(area) * 4; 

	cout << setprecision(8) << fence; 

	return 0;
}