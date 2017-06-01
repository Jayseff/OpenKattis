#include <iostream>

using namespace std; 

int main()
{
	int priceA, priceB, priceC; 
	int firstTruckA, firstTruckB, secondTruckA, secondTruckB, thirdTruckA, thirdTruckB; 
	int lowestNumber, counter, totalCost = 0; 

	cin >> priceA >> priceB >> priceC; 
	cin >> firstTruckA >> firstTruckB; 
	cin >> secondTruckA >> secondTruckB; 
	cin >> thirdTruckA >> thirdTruckB; 

	lowestNumber = firstTruckA; 

	if (lowestNumber > secondTruckA)
		lowestNumber = secondTruckA; 

	if (lowestNumber > thirdTruckA)
		lowestNumber = thirdTruckA; 

	do {
		counter = 0; 
		
		if (lowestNumber >= firstTruckA && lowestNumber < firstTruckB)
			counter++; 
		if (lowestNumber >= secondTruckA && lowestNumber < secondTruckB)
			counter++; 
		if (lowestNumber >= thirdTruckA && lowestNumber < thirdTruckB)
			counter++; 

		if (counter == 1)
			totalCost += priceA; 
		if (counter == 2)
			totalCost = totalCost + priceB * 2; 
		if (counter == 3)
			totalCost = totalCost + priceC * 3; 

		lowestNumber++; 
	} while (lowestNumber < 101); 

	cout << totalCost; 
	return 0; 
}