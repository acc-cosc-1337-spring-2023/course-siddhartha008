//write include statements
#include <iostream>
#include "dna.h"
//write using statements

using std::cin;
using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main()
{

	bool stillRunning;

	do
	{
		int optionChoice; //for choosing menu choices (factorial, gcd, or quit the program)
		int userInputNum; //num1 for both factorial and gcd first number
		int userInputNum2; //num2 for GCD calculation
		int result = 0; //storing all the results 

		cout << "Options -> 1) Factorial \t 2) GCD \t 3) Exit: ";
		cin >> optionChoice;

		//using switch case to determine the functionality of the program
		switch (optionChoice)
		{
		//1 for factorial
		case 1:
			cout << "Enter a number to calculate factorial: ";
			cin >> userInputNum;
			result = factorial(userInputNum);
			cout << "Factorial of " << userInputNum << " is " << result << "\n";
			break;

		//2 for GCD calculation
		case 2:
			cout << "Enter num1 and num2 to find GCD: \n";
			cout << "Enter first number: ";
			cin >> userInputNum;
			cout << "Enter second number: ";
			cin >> userInputNum2;
			result = gcd(userInputNum, userInputNum2);
			cout << "GCD of " << userInputNum << " and " << userInputNum2 << " is " << result << "\n";
			break;

		//3 for exit - prompt if they surely want to exit
		case 3:
			cout << "Are you sure you want to exit? (y or n): ";
			char exitChoice;
			cin >> exitChoice;
			if (exitChoice == 'y' || exitChoice == 'Y')
			{
				stillRunning = false;
				break;
			}
			else if (exitChoice == 'n' || exitChoice == 'N')
			{
				stillRunning = true;
				break;
			}

		default:
			cout << "Invalid CHoice\n";
			break;
		}
	} while (stillRunning);

	return 0;
}