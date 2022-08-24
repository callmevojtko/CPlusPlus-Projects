/*Brian Vojtko
CMPSC101
Program 8*/

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 50; //Characters for Player Name

struct soccerPlayer
{
	char playerName[SIZE];		//Player Name
	int playerNumber;			//Player Number	
	int pointsScored;			//Points Scored
	int highscorePlayer;		//Highest Scoring Player
};

const int numPlayers = 12;			//Number of Players
soccerPlayer *player = new soccerPlayer[numPlayers]; //Structure Array

//Declare Variables
int total = 0;
int highscorePlayer = 0;
int highscore = player[0].pointsScored;

//Function Prototypes
int totalPoints(soccerPlayer[], int);
void displayInfo(soccerPlayer);
void highestScore(soccerPlayer[], int, int);
void playerInfo(soccerPlayer &);

int main() //Main Function
{
	//Welcome Message
	cout << "Welcome to the Player Points Tool!" << endl;
	cout << "------------------------------------------" << endl;
	
	//Function Calls
	playerInfo(*player);
	totalPoints(player, total);
	displayInfo(*player);
	highestScore(player, highscorePlayer, highscore);
	
	return 0;
}

void playerInfo(soccerPlayer &) //Player Information Function
{
	//User Instruction to Gather Player Data
	cout << "You will need the following information: \n";
	cout << "The players name, number, and the points scored by the player." << endl;
	cout << endl;
	
	//Loop to Gather Player Data
	for (int i = 0; i < numPlayers; i++)
	{
		cout << "PLAYER #" << i + 1 << endl;
		cout << "----------" << endl;
		cout << "Player Name: ";
		cin >> player[i].playerName;
		cout << "Player Number: ";
		cin >> player[i].playerNumber;

		//Error Message for Player Number Under 0
		while (player[i].playerNumber < 0)
		{
			cout << "No numbers below 0 are allowed!\n";
			cout << "Please enter the players number: ";
			cin >> player[i].playerNumber;
		}

		cout << "Points Scored: ";
		cin >> player[i].pointsScored;
		cout << endl;

		//Error Message for Player Score Under 0
		while (player[i].pointsScored < 0)
		{
			cout << "No numbers below 0 are allowed!\n";
			cout << "Please enter the points scored by the player: ";
			cin >> player[i].pointsScored;
		}
	}
}

int totalPoints(soccerPlayer[], int i) //Total Points Function
{
	//Loop That Calculates Total Amount of Points
	for (i = 0; i < numPlayers; i++)
	{
		total += player[i].pointsScored;
	}

	return total;
}

void displayInfo(soccerPlayer) //Displays Player Information Function
{
	//Declare Variables
	int i;
	int points = 0;

	//Output Message
	cout << "Below is the players data:\n" << endl;
	
	cout << "    NAME    NUMBER   POINTS\n";
	cout << "----------------------------------\n";

	//Loop That Sets Width Space For Data
	for (i = 0; i < numPlayers; i++)
	{
		cout << setw(8) << player[i].playerName;
		cout << setw(8) << player[i].playerNumber;
		cout << setw(8) << player[i].pointsScored;
		cout << endl;
	}

	cout << endl;
	cout << "The total amount of points the team has scored: ";		//Output for Total Amount of Points Team Scored
	cout << total << endl;

}

void highestScore(soccerPlayer[], int highscorePlayer, int highscore) //Highest Score Function
{
	//Loop for Calculating Highest Scoring Player
	for (int i = 0; i < numPlayers; i++)
	{
		if (player[i].pointsScored > player[highscorePlayer].pointsScored)
		{
			highscore = player[i].pointsScored;
			highscorePlayer = i;
		}
	}

	//Output for Player With Highest Score
	cout << "The player with the highest score was " << player[highscorePlayer].playerName << " with a score of: " << player[highscorePlayer].pointsScored << endl;	
}