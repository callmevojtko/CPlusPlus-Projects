/*Brian Vojtko
CMPSC101
Program 2*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Welcome Message
	cout << "Welcome to the Sales Tax Calculator!" << endl;

	cout << "To calculate the total sales tax for the month, \n";
	cout <<	"please supply the requested information." << endl;

	cout << "------------------------------------------------------------------------------" << endl << endl;

	//Declare Variables
	string month;                                                  //Month Requested
	string year;                                                   //Year Requested
	double totalCollected;                                         //Total Amount Collected Requested
	double stateTax = 0.04, countyTax = 0.02;                      //Equation to find Total Sales Tax
	double sales;                                                  //Total Amount of Sales
	double stateTaxTotal, countyTaxTotal, totalSalesTax;           //Total Amount of State Tax, County Tax, and Total Sales Tax

	//Request Information
	cout << "Please enter the year: ";                     //Year Requested
	cin >> year;

	cout << "Please enter the month: ";                    //Month Requested
	cin >> month;

	cout << "Please enter the total amount collected: $";  //Total Amount Collected Requested
	cin >> totalCollected;

	//Data Report Variables
	sales = totalCollected / 1.06;                         //Total Sales Equation
	stateTaxTotal = sales * stateTax;                      //Equation for State Tax
	countyTaxTotal = sales * countyTax;                    //Equation for County Tax
	totalSalesTax = stateTaxTotal + countyTaxTotal;        //Equation for Total Sales Tax

	//Data Report Output
	cout << "------------------------------------------------------------------------------" << endl << endl;

	cout << "Month: " << month << ", " << year << endl;                 //Month and Year of Data Report

	cout << "--------------------" << endl;

	cout << setprecision(2) << fixed;
	
	cout << "Total Collected:" << setw(9) << "$" << setw(9) << totalCollected << endl;      //Display Total Amount Collected

	cout << "Sales:" << setw(19) << "$" << setw(9) << sales << endl;                        //Display Sales

	cout << "County Sales Tax:" << setw(8) << "$" << setw(9) << countyTaxTotal << endl;     //Display County Sales Tax

	cout << "State Sales Tax:" << setw(9) << "$" << setw(9) << stateTaxTotal << endl;       //Display State Sales Tax

	cout << "Total Sales Tax:" << setw(9) << "$" << setw(9) << totalSalesTax << endl;       //Display Total Sales Tax
}