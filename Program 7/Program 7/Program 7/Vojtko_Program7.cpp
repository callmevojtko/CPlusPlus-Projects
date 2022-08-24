/*Brian Vojtko
CMPSC101
Program 7*/
#include <iostream>

//Function Prototype
int binarySearch(int[], int, int);

using namespace std;

int main()
{
	const int size = 10; //Size of array
	int winningNumbers[size] = { 1359, 2691, 2692, 3445, 5555, 6248, 7777,
								9422, 8547, 9311 }; //Array of winning lottery ticket numbers
	int numbers; //Holds binary search results
	int luckyNumber; //Holds winning lottery ticket number

	//Welcome message
	cout << "Welcome to the Lottery Ticket Checker!" << endl;
	cout << "-----------------------------------------------";
	cout << endl;

	//User direction
	cout << "Please enter your winning 4-digit number: ";
	cin >> luckyNumber;

	//Checks to see if user entered 4-digit number
	while (luckyNumber < 1000 || luckyNumber > 10000) {
		cout << "Invalid Input! Please use only 4-digit numbers! Try again: ";
		cin >> luckyNumber;
	   }

	//Searches for winning lottery ticket number
	numbers = binarySearch(winningNumbers, size, luckyNumber);

	//Displays winning lottery ticket number
	if (numbers == -1)
		cout << "Sorry, your ticket number is not a winning ticket." << endl;
	else {
		cout << "Congratulations! Your ticket number is a winning ticket!" << endl;
	}

	return 0;
}

//Binary search function
int binarySearch(int array[], int SIZE, int value)
{
	bool found = false;
	
	int first = 0, last = SIZE - 1, middle, position = -1; //First + last array, midpoint of search, and position of search value

	while (!found && first <= last)
	{
		middle = (first + last) / 2; //Calculates midpoint
		if (array[middle] == value) //If value is in middle
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) //If value is in lower half
			last = middle - 1;
		else
			first = middle + 1; //If value is in upper half
	}
	return position;
}