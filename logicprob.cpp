// Purpose: This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.

// Anton Luna
// CSIS-113A-3780 
// Last Modified Date: 3/22/2024

#include <iostream>
using namespace std;

int main()
{
	float firstNumber; //first number entered
	float secondNumber;// second number entered
	float temp; //hold temporary data

	// Prompt user to enter the first number. 
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Prompt user to enter the second number. 
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.
	cout << endl << "You input the numbers as " << firstNumber
		 << " and " << secondNumber << endl;

	// Now we will swap the values. 
	temp = firstNumber;
	firstNumber = secondNumber;
	secondNumber = temp;

	// Output the values.
	cout << "After swapping, the values of the two numbers are "
		 << firstNumber << " and " << secondNumber << endl;

	return 0;
}