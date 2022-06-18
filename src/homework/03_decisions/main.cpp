#include <iostream>
#include "decisions.h"

using std :: cout;
using std :: cin;

int main() 
{
	double credit_hours = 0;
	double credit_points = 0;

	string letter_grade = "";
	int hours;

	string choice = "no";

	display_menu();

	do
	{
		cout << "Enter letter grade:\n";
		cin >> letter_grade;
		
		cout << "Enter credit hours:\n";
		cin >> hours;

		while (hours <= 0){
			cout << "Cannot enter zero for credit hours\n";
			cout << "Enter credit hours:\n";
			cin >> hours;
		}

		// add grade to the sum
		credit_points += get_grade_points(letter_grade) * hours;
		credit_hours += hours;

		cout << "Do you want to continue:\n";
		cin >> choice;

	}while (choice == "yes");
	
	cout << "The cumulative G.P.A. is:" << calculate_gpa (credit_hours, credit_points) << endl;
	cout << "Total credit points:" << credit_points << endl;
	cout << "Total credit hours:" << credit_hours << endl;




	return 0;
}