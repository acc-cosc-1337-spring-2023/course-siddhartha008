#include "func.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
	//run program until user enters 3
	int choice = 0;
	string dna;

	cout << "\nEnter DNA to begin: ";
	cin >> dna;

	//display menu
	cout << "\n\t\tMenu\n\n";
	cout << "1. Get GC Content\n";
	cout << "2. Get DNA Reverse Complement\n";
	cout << "3. Exit\n\n";
	cout << "Enter your choice: ";
	cin >> choice;

	//if user enters 1, get gc content using switch
	switch (choice)
	{
	case 1:
	{
		cout << "\nGC Content of DNA: " << dna << " is " << get_gc_content(dna) << "\n\n";
		break;
	}
	//if user enters 2, get dna reverse complement using switch
	case 2:
	{
		cout << "\nDNA Reverse Complement of DNA: " << dna << " is " << get_dna_complement(dna) << "\n\n";
		break;
	}
	//if user enters 3, exit program
	case 3:
	{
		cout << "\nGoodbye!\n\n";
		break;
	}
		return 0;
	}
}