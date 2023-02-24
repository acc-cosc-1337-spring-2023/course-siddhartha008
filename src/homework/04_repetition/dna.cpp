//add include statements
#include "dna.h"

//add function(s) code here
int factorial(int num)
{
    auto result = 1;
    if (num < 0)
    {
        result = 0;
    }
    while (num > 0)
    {
        result *= num;
        num--;
    }
    return result;
}

int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 < num2)
        {
            int x = num1; //'x' variable stores num1 because num1 gets replaced by num2 in next line
            num1 = num2;
            num2 = x; //num2 becomes 'x' which is num1 basically
        }
        num1 -= num2;
    }
    return num1;
}

//factorial BTS
//1 = 1*5 (5)
//5 = 5*4 (20)
//20 = 20*3 (60)
//60 = 60*2(120)
//120 = 120*1 (120)
