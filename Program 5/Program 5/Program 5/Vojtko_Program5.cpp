/*Brian Vojtko
CMPSC101
Program 5*/

#include <iostream>
#include <iomanip>

using namespace std;

//Prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	//Declare Variables
	int testScore1, testScore2, testScore3, testScore4, testScore5;
	char answer = 'y'; //"Yes" answer to question of whether the user wants to repeat the program
	
	do {
		cout << endl;
		//Welcome Message
		cout << "Welcome to the Average Test Score Calculator!" << endl;
		cout << "This calculator calculates the average group of test scores." << endl;
		cout << "The lowest score in the group is dropped." << endl;

		//getScore Function
		getScore(testScore1);
		getScore(testScore2);
		getScore(testScore3);
		getScore(testScore4);
		getScore(testScore5);

		calcAverage(testScore1, testScore2, testScore3, testScore4, testScore5); //Average of test scores

		cout << endl;
		
		//Asks the user if they want to repeat the program
		cout << "Do you want to calculate another set of test scores? (y or n): ";
		cin >> answer;
	
	} while (answer == 'y'); //"Yes" answer to question whether user wants to repeat program

	return 0;
}

void getScore(int & score) //Asks the user for a test score, stores it in a reference parameter variable, and validates it.
{
	cout << endl;
	
	cout << "Please enter a test score: "; //Directive for user to input a test score
	cin >> score;

	while (score < 0 || score > 100)
	{
		cout << "Invalid! Please enter a valid test score: "; //Error message for invalid test score
		cin >> score;
	}

}

void calcAverage(int testScore1, int testScore2, int testScore3, int testScore4, int testScore5) //Calculates and displays the average of the four highest scores.
{
	int lowest; //Lowest test score
	double average; //Average of the four remaining test scores

	lowest = findLowest(testScore1, testScore2, testScore3, testScore4, testScore5); //findLowest Function

	//Calculation of the four remaining test scores
	if (lowest == testScore1)
		average = (testScore2 + testScore3 + testScore4 + testScore5) / 4;
	
	else if (lowest == testScore2)
		average = (testScore1 + testScore3 + testScore4 + testScore5) / 4;

	else if (lowest == testScore3)
		average = (testScore1 + testScore2 + testScore4 + testScore5) / 4;

	else if (lowest == testScore4)
		average = (testScore1 + testScore2 + testScore3 + testScore5) / 4;

	else 
		average = (testScore1 + testScore2 + testScore3 + testScore4) / 4;

	cout << endl;
	
	cout << "The average of your four highest scores is: " << average << endl; //Display of average of test scores
}

int findLowest(int testScore1, int testScore2, int testScore3, int testScore4, int testScore5) //Finds and returns the lowest of the five scores passed to it.
{
	//Calculation that determines lowest test score
	if (testScore1 <= testScore2 && testScore1 <= testScore3 && testScore1 <= testScore4 && testScore1 <= testScore5)
		return testScore1;
	else if (testScore2 <= testScore1 && testScore2 <= testScore3 && testScore2 <= testScore4 && testScore2 <= testScore5)
		return testScore2;
	else if (testScore3 <= testScore1 && testScore3 <= testScore2 && testScore3 <= testScore4 && testScore3 <= testScore5)
		return testScore3;
	else if (testScore4 <= testScore1 && testScore4 <= testScore2 && testScore4 <= testScore3 && testScore4 <= testScore5)
		return testScore4;
	else if (testScore5 <= testScore1 && testScore5 <= testScore2 && testScore5 <= testScore3 && testScore5 <= testScore4)
		return testScore5;
}