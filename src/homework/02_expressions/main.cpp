#include<iostream>
#include "hwexpressions.h"

using namespace std;
using std::cin; 
using std::cout;

int main()
{
	double meal_amount; 
    	cout << "Enter meal amount: ";
		cin >> meal_amount;

	double tip_rate;
    	cout <<"Enter tip rate:";	
		cin >> tip_rate;

	double tip_amount ;

	double tax_amount;

	double total;

	tax_amount = get_sales_tax_amount (meal_amount);
	
	tip_amount = get_tip_amount (meal_amount, tip_rate);
		
	total = meal_amount + tip_amount + tax_amount;

	cout << "Meal Amount:" << meal_amount << endl;
	cout << "Tip amount:" << tip_amount << endl;
	cout << "Sales Tax:" << tax_amount << endl;
	cout << "Total:" << total << endl;

}
   
