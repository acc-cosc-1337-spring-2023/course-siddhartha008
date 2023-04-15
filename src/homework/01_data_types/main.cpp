// write include statements
#include <iostream>
#include "data_types.h"

// write namespace using statement for cout
using std::cin;
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	// variable declaration
	int num = 0;
	int result = 0;

	cout << "Enter a number: ";
	cin >> num;						// asking user for input
	result = multiply_numbers(num); // calling the function with user input number as a parameter
	cout << "Result is: " << result << "\n";

	int num1 = 4;
	result = multiply_numbers(num1); // result updates here...
	cout << "New result is: " << result << "\n";

	return 0;
}
