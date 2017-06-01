#include <iostream>
using namespace std; 

int main()
{
	int array[4]; 
	int x = 0, highest_score, score = 0, prev_score = 0, player;

	while (x < 5)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> array[i]; 
		}

		for (int i = 0; i < 4; i++)
		{
			score = score + array[i]; 
		}

		if (prev_score < score)
		{

			prev_score = score; 
			player = x + 1; 
		}

		score = 0; 

		x++; 
	}

	cout << player << " " << prev_score; 

	return 0; 
}