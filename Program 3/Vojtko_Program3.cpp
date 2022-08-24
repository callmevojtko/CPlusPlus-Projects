/*Brian Vojtko
CMPSC101
Program 3*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Declare Variables
	double Carbon_Distance, Air_Distance, Helium_Distance, Hydrogen_Distance, time;              //Distance equations and amount of time it took the sound to travel
	int choice;																			         //Users choice of gas
	const int ChoiceCarbon = 1, ChoiceAir = 2, ChoiceHelium = 3, ChoiceHydrogen = 4;             //Choice number that represents each gas
	const double Carbon_Dioxide = 258.0, Air = 331.5, Helium = 972.0, Hydrogen = 1270.0;         //Speed in meters per second of the gas
	
	//Display Menu
	cout << "Welcome to the Speed of Sound in Gases Calculator!" << endl;   //Welcome message
	
	cout << endl;

	cout << "Please choose an option from the menu:" << endl;  //Directive to choose which gas the user wants
	cout << "1. Carbon Dioxide" << endl;
	cout << "2. Air" << endl;
	cout << "3. Helium" << endl;
	cout << "4. Hydrogen" << endl;

	cout << endl;

	cout << "Choice: ";  //Input for what gas the user chooses
	cin >> choice;

		switch (choice)
		{
	//Carbon Dioxide
		case ChoiceCarbon: 
			
			cout << "You chose Carbon Dioxide."; //Display which gas the user chose
			
			cout << endl;
			
			cout << "Please enter the number of seconds it took for the sound to travel (0-30 seconds): ";    //Instructing the user to input the amount of time in seconds that gas has travelled.
			cin >> time;
			cout << endl;

			if (time < 0 || time > 30)
			{
				cout << "Error! You must only enter seconds between 0 and 30!";     //Tells the user that they have entered a time that was invalid
				cout << " Please enter the time again: ";  //Directive to enter a valid time
				cin >> time;
			}
			
			Carbon_Distance = time * Carbon_Dioxide;    //The equation for the distance carbon dioxide travels
			
			cout << "The distance of the source of the sound is: " << Carbon_Distance << " meters away." << endl;      //Output that tells the user the distance of the sound through the gas
		
			break;
		
	//Air
		case ChoiceAir:

			cout << "You chose Air."; //Display which gas the user chose

			cout << endl;

			cout << "Please enter the number of seconds it took for the sound to travel (0-30 seconds): ";     //Instructing the user to input the amount of time in seconds that gas has travelled.
			cin >> time;
			cout << endl;

			if (time < 0 || time > 30)
			{
				cout << "Error! You must only enter seconds between 0 and 30!";     //Tells the user that they have entered a time that was invalid
				cout << " Please enter the time again: ";  //Directive to enter a valid time
				cin >> time;
			}

			Air_Distance = time * Air;  //The equation for the distance air travels

			cout << "The distance of the source of the sound is: " << Air_Distance << " meters away." << endl;  //Output that tells the user the distance of the sound through the gas

			break;
	
	//Helium	
		case ChoiceHelium:
		
			cout << "You chose Helium."; //Display which gas the user chose

			cout << endl;

			cout << "Please enter the number of seconds it took for the sound to travel (0-30 seconds): ";     //Instructing the user to input the amount of time in seconds that gas has travelled.
			cin >> time;
			cout << endl;

			if (time < 0 || time > 30)
			{
				cout << "Error! You must only enter seconds between 0 and 30!";     //Tells the user that they have entered a time that was invalid
				cout << " Please enter the time again: ";   //Directive to enter a valid time
				cin >> time;
			}

			Helium_Distance = time * Helium;  //The equation for the distance helium travels

			cout << "The distance of the source of the sound is: " << Helium_Distance << " meters away." << endl;  //Output that tells the user the distance of the sound through the gas

			break;
		
	//Hydrogen
		case ChoiceHydrogen:

			cout << "You chose Hydrogen."; //Display which gas the user chose

			cout << endl;

			cout << "Please enter the number of seconds it took for the sound to travel (0-30 seconds): ";     //Instructing the user to input the amount of time in seconds that gas has travelled.
			cin >> time;
			cout << endl;

			if (time < 0 || time > 30)
			{
				cout << "Error! You must only enter seconds between 0 and 30!";      //Tells the user that they have entered a time that was invalid
				cout << " Please enter the time again: ";   //Directive to enter a valid time
				cin >> time;
			}

			Hydrogen_Distance = time * Hydrogen;  //The equation for the distance hydrogen travels

			cout << "The distance of the source of the sound is: " << Hydrogen_Distance << " meters away." << endl;  //Output that tells the user the distance of the sound through the gas

			break;
		
		default:
			{
				cout << "Error! The only valid choices are 1-4." << endl;    //Warning message that the user entered an invalid choice
				cout << "Please run the program again." << endl;       //Directive to rerun the program
			}
		
		
		}

	return 0;
}