// write include statements
#include <iostream>
#include "hwexpressions.h"

// using namespaces for cout and cin for output and input
using std::cin;
using std::cout;

int main()
{
	// variables declaration
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	// meal amount calculation
	cout << "Enter the meal amount: ";
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	// calculating tip amount from tip rate and meal amount
	cout << "Enter the tip rate: ";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	// calculating total
	total = meal_amount + tax_amount + tip_amount;

	// displaying the total in a readable way
	cout << "---------------------";
	cout << "\nMeal Amount: \t" << meal_amount << "\n";
	cout << "Sales Tax: \t" << tax_amount << "\n";
	cout << "Tip Amount: \t" << tip_amount << "\n";
	cout << "Total: \t\t" << total << "\n";
	cout << "---------------------\n";

	return 0;
}
