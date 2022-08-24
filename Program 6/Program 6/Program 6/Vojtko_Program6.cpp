/*Brian Vojtko
CMPSC101
Program 6*/
#include <iostream>
#include <cctype>

using namespace std;

//Function Prototype
void studentsAnswers(char[], int);
void output(char[], char[], int, int);

int main()
{
	//Declare Variables
	const int questions = 20; //# of Questions
	const int minimumCorrect = 15; // Minimum # of questions required to pass
	char correctAnswers[questions] = { 'A', 'A', 'B', 'C', 'A', 'D', 'A', 'A', 'B', 'C', 
	'C', 'C', 'A', 'C', 'B', 'B', 'A', 'B', 'C', 'A' }; //Correct Answers
	
	char studentAnswers[questions];

	//Welcome message
	cout << "Welcome to the Drivers Exam Grader!" << endl;
	cout << "Please enter the student's answers to find out if they have passed the exam." << endl;
	cout << "------------------------------------------------------------------------------" << endl;

	//Function Calls
	studentsAnswers(studentAnswers, questions);
	output(correctAnswers, studentAnswers, questions, minimumCorrect);

	return 0;
}

void studentsAnswers(char studentAnswers1[], int questions)
{
	//Answers the student got correct
	int answers = 0;
	
	//Loop for answers
	for (int i = 0; i < questions; i++)
	{
		cout << "Please enter the students answer for question " << (i + 1) << " (capital letters only): ";
		cin >> studentAnswers1[i];
		cout << endl;

		//Loop to check to see if user entered valid input
		while (studentAnswers1[i] != 'A' && studentAnswers1[i] != 'a' &&
			studentAnswers1[i] != 'B' && studentAnswers1[i] != 'b' &&
			studentAnswers1[i] != 'C' && studentAnswers1[i] != 'c' &&
			studentAnswers1[i] != 'D' && studentAnswers1[i] != 'd')
		{
			cout << "Error! Invalid input! Please only use A, B, C, or D!" << endl;
			cout << "Please enter your answer for question " << (i + 1) << " (capital letters only): ";
			cin >> studentAnswers1[i];
		}

	}

}

void output(char correctAnswers1[], char studentAnswers1[], int questions, int minimumCorrect)
{	
	//Answers the student got correct
	int answers = 0;

	//Checks the students answers with the correct answers
	for (int i = 0; i < questions; i++)
	{
		if (correctAnswers1[i] == studentAnswers1[i])
			answers++;
	}

	//Checks to see if the student got the required minimum questions correct
	cout << "There is a minimum of 15 questions correct to pass the exam." << endl;
	
	cout << endl;

	//Message to user if student passed/failed exam
	if (answers >= minimumCorrect)
	{
		cout << "Congratulations! The student passed the exam!";
	}
	else
	{
		cout << "The student failed the exam.";
	}
	
	cout << endl;

	//Displays questions the student got correct and incorrect
	cout << "Here are the questions the student got wrong: " << endl;

	for (int i = 0; i < questions; i++)
	{
		if (correctAnswers1[i] != studentAnswers1[i])
		{
			cout << "Question " << i << " is incorrect." << endl;
		}
	}

	//Displays the number of correct and incorrect answers the student gave
	cout << "The student answered a total of " << answers << " answers correctly." << endl;
	cout << "The student answered a total of " << questions - answers << " answers incorrectly." << endl;	
}