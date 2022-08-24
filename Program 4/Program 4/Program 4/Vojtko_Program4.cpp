/*Brian Vojtko
CMPSC101
Program4*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declare Variables
	int store1, store2, store3, store4, store5;
	int sales1, sales2, sales3, sales4, sales5;

	cout << "Welcome to the Sales Graphing Program. Follow the prompts below." << endl; //User Greeting

	cout << endl;
	
	cout << "Enter today's sales for store 1: "; //Directive for user to input sales for store 1
	cin >> store1;
	
		if (store1 < 0)
		{
			cout << "Error! Invalid Sales Number!";     //Tells the user that they have entered a number that was invalid
			cout << " Please enter a different sales number: ";  //Directive to enter a valid number
			cin >> store1;
		}
	
	cout << "Enter today's sales for store 2: "; //Directive for user to input sales for store 2
	cin >> store2;
	
	if (store2 < 0)
		{
			cout << "Error! Invalid Sales Number!";     //Tells the user that they have entered a number that was invalid
			cout << " Please enter a different sales number: ";  //Directive to enter a valid number
			cin >> store2;
		}
	
	cout << "Enter today's sales for store 3: "; //Directive for user to input sales for store 3
	cin >> store3;
	
	if (store3 < 0)
		{
			cout << "Error! Invalid Sales Number!";     //Tells the user that they have entered a number that was invalid
			cout << " Please enter a different sales number: ";  //Directive to enter a valid number
			cin >> store3;
		}
	
	cout << "Enter today's sales for store 4: "; //Directive for user to input sales for store 4
	cin >> store4;
	
	if (store4 < 0)
		{
			cout << "Error! Invalid Sales Number!";     //Tells the user that they have entered a number that was invalid
			cout << " Please enter a different sales number: ";  //Directive to enter a valid number
			cin >> store4;
		}
	
	cout << "Enter today's sales for store 5: "; //Directive for user to input sales for store 5
	cin >> store5;

	if (store5 < 0)
		{
			cout << "Error! Invalid Sales Number!";     //Tells the user that they have entered a number that was invalid
			cout << " Please enter a different sales number: ";  //Directive to enter a valid number
			cin >> store5;
		}

	cout << endl; 

	cout << "-------------------------------------------" << endl;
	cout << "SALES BAR CHART (Each * = $100)" << endl;             //Sales Bar Chart Section
	cout << "-------------------------------------------" << endl;

	//Variables for *'s
	sales1 = store1 / 100;
	sales2 = store2 / 100;
	sales3 = store3 / 100;
	sales4 = store4 / 100;
	sales5 = store5 / 100;

	cout << "Store 1: ";                //Output for store 1
	for (int i = 0; i < sales1; i++)
		cout << "*";
		cout << endl;
	cout << "Store 2: ";                //Output for store 2
	for (int i = 0; i < sales2; i++)
		cout << "*";
		cout << endl;
	cout << "Store 3: ";                //Output for store 3
	for (int i = 0; i < sales3; i++)
		cout << "*";
		cout << endl;
	cout << "Store 4: ";                //Output for store 4
	for (int i = 0; i < sales4; i++)
		cout << "*";
		cout << endl;
	cout << "Store 5: ";                //Output for store 5
	for (int i = 0; i < sales5; i++)
		cout << "*";
		cout << endl;

	cout << "-------------------------------------------" << endl;

	return 0;
}