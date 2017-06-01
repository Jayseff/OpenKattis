#include <iostream>

using namespace std; 

int main()
{
/*	int numberOfLines, number, counter = 0; 

	cin >> numberOfLines; 

	for (int i = 0; i < numberOfLines; i++) {
		cin >> number; 

		counter = 0; 

		if (number == 0)
			counter++; 

		else {
			while (number > 0) {
				number = number / 10;
				counter++;
			}
		}

		cout << counter << endl;

	}
*/   
//Does not work with large numbers 10+ digits


//String is counted by the number of characters

	int numberOfLines; 
	string number; 

	cin >> numberOfLines; 
	for (int i = 0; i < numberOfLines; i++) {
		cin >> number;
		cout << number.length() << endl; 
	}

	return 0; 
}