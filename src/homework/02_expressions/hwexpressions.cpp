#include "hwexpressions.h"

// constant value of tax_rate = 6.75% (decimal equivalent = 0.0675)
const double tax_rate = 0.0675;

double get_sales_tax_amount(double meal_amount)
{
	return tax_rate * meal_amount; 
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	//(tip_rate/100 = decimal equivalent of tip_rate percentage)
	return meal_amount * (tip_rate / 100);
}