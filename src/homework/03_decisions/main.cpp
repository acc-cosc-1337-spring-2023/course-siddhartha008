// write include statements
#include "decisions.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
	auto option = 0;
	auto grade = 0;
	string letter_grade = "";
	cout << "1 - Letter grade using if\t\t2 - Letter grade using switch\t\t3 - Exit \n ";
	cout << "Choose an option (1,2, or 3): ";
	cin >> option;

	if (option == 1)
	{
		cout << "Enter an integer grade: ";
		cin >> grade;
		if (grade > 100 || grade < 0)
		{
			cout << "\nInvalid Grade Range. Must be (0-100). Try Again. \n";
		}
		else
		{
			letter_grade = get_letter_grade_using_if(grade);
			cout << "*using if_else_if*\n Your grade in letter is: " << letter_grade << "\n";
		}
	}
	else if (option == 2)
	{
		cout << "Enter an integer grade: ";
		cin >> grade;
		if (grade > 100 || grade < 0)
		{
			cout << "\nInvalid Grade Range. Must be (0-100). Try Again. \n";
		}
		else
		{
			letter_grade = get_letter_grade_using_switch(grade);
			cout << "*using switch*\n Your grade in letter is: " << letter_grade << "\n";
		}
	}
	else
	{
		cout << "Exiting the program\n";
	}
	return 0;
}