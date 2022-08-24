#include <iostream>

using namespace std;

int main()
{
	/*Brian Vojtko
	CMPSC101
	Program 1*/

	//Welcome Message
	cout << "Welcome to the Geometry Calculator!" << endl;

	//Directions
	cout << "To calculate the area for each shape, please supply the requested information." << endl;

	cout << "All input must be in inches.\n";

	cout << "Fractional measurements should be entered as a decimal." << endl;
	cout << "----------------------------------------------------------------" << endl << endl;

	//Square

	//Declare Variables
	int side, sq_area;
	
	//Input Square
	cout << "SQUARE" << endl;
	
	cout << "Enter the length of one side of the square: ";
	cin >> side;

	cout << endl;

	//Rectangle

	//Declare Variables
	int length, width, rec_area;

	//Input Rectangle
	cout << "RECTANGLE" << endl;

	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	
	cout << endl;
	
	//Triangle

	//Declare Variables
	int base, tri_height, tri_area;

	//Input Triangle
	cout << "TRIANGLE" << endl;

	cout << "Enter the base of the triangle: ";
	cin >> base;
	cout << "Enter the height of the triangle: ";
	cin >> tri_height;
	
	cout << endl;
	
	// Parallelogram

	//Declare Variables
	int par_base, par_height, par_area;

	//Input Parallelogram
	cout << "PARALLELOGRAM" << endl;

	cout << "Enter the base of the parallelogram: ";
	cin >> par_base;
	cout << "Enter the height of the parallelogram: ";
	cin >> par_height;
	
	cout << endl;
	
	//Circle

	//Declare Variables
	int radius, cir_area;

	//Input Circle
	cout << "CIRCLE" << endl;

	cout << "Enter the radius of the circle: ";
	cin >> radius;

	cout << endl;
	
	//Area Report

	cout << "Geometry Calculator\n";
	cout << "Area Report" << endl;	
	cout << "---------------------------------------------------------" << endl << endl;

	const char*variableName = " square inches";
	
	
	//Output Square
	cout << "SQUARE" << endl;
	
	sq_area = side * side;

	cout << "Side: " << side << endl;
	cout << "Area: " << sq_area << variableName << endl << endl;


	//Output Rectangle
	cout << "RECTANGLE" << endl;
	
	rec_area = length * width;

	cout << "Length: " <<length << endl;
	cout << "Width: " << width << endl; 
	cout << "Area: " << rec_area << variableName << endl << endl;


	//Output Triangle
	cout << "TRIANGLE" << endl;
	
	tri_area = (tri_height * base) / 2;

	cout << "Base: " << base << endl;
	cout << "Height: " << tri_height << endl;
	cout << "Area: " << tri_area << variableName << endl << endl;

	
	//Output Parallelogram
	cout << "PARALLELOGRAM" << endl;
	
	par_area = par_base * par_height;

	cout << "Base: " << par_base << endl;
	cout << "Height: " << par_height << endl;
	cout << "Area: " << par_area << variableName << endl << endl;
 

	//Output Circle
	cout << "CIRCLE" << endl;
	
	cir_area = (3.14159) * (radius * radius);

	cout << "Radius: " << radius << endl;
	cout << "Area: " << cir_area << variableName << endl << endl;

	return 0;
}