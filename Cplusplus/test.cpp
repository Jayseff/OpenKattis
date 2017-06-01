#include <iostream>

using namespace std; 


struct book
{
	string title; 
	string author; 
	string publication_year; 
};
int main()
{
	int size; 
	cout << "How many books?: ";
	cin >> size; 

	book* books = new book[size];

	for (int i = 0; i < size; i++ )
	{
		cout << "Title: ";
		cin >> books[i].title; 
		cout << "Author: "; 
		cin >> books[i].author; 
		cout << "Publication year: "; 
		cin >> books[i].publication_year; 
	}
	for (int i = 0; i < size; i++)
	{
		cout << books[i].title << endl;
		cout << books[i].author << endl;
		cout << books[i].publication_year << endl;
	}

	delete []books;
	return 0; 
}