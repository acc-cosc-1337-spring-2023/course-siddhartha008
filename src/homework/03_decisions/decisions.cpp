// write include statement for decisions header
#include "decisions.h"
using std::string;

// Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string letter_grade;

    if (grade >= 90 && grade <= 100)
        letter_grade = "A";
    else if (grade >= 80 && grade < 90)
        letter_grade = "B";
    else if (grade >= 70 && grade < 80)
        letter_grade = "C";
    else if (grade >= 60 && grade < 70)
        letter_grade = "D";
    else
        letter_grade = "F";

    return letter_grade;
}

std::string get_letter_grade_using_switch(int grade)
{
    std::string letter_grade;
    switch (grade / 10) // dividing by 10 to get a number between 0-10
    {
    //(90-100)
    case 10:
    case 9:
        letter_grade = "A";
        break;
    //(80-90)
    case 8:
        letter_grade = "B";
        break;
    //(70-80)
    case 7:
        letter_grade = "C";
        break;

    //(60-70)
    case 6:
        letter_grade = "D";
        break;

    //(0-50)
    default: // this is like the else in an if statement
        letter_grade = "F";
        break;
    }
    return letter_grade;
}