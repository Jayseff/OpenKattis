#include <iostream>
#include <cmath>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std; 

int main()
{
	int height, angle; 
	double ladder; 

	cin >> height >> angle; 

	ladder = height / sin(angle * M_PI / 180); 
	cout << ceil(ladder); 

	return 0; 
}