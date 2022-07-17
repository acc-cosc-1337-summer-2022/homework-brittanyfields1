#include "decisions.h"


int get_grade_points(string letter_grade){

    if(letter_grade == "A")
    {
        return 4.0;
    }
    else if (letter_grade == "B")
    {
        return 3.0;
    }
    else if (letter_grade == "C")
    {
        return 2.0;
    }
    else if (letter_grade == "D")
    {
        return 1.0;
    }
    else if (letter_grade == "F")
    {
        return 0.0;
    }
    return 0;
}

double calculate_gpa (int credit_hours, double credit_points){

    if (credit_hours == 0){
        cout << "Invalid";
        return 0;
    }
    return credit_points / credit_hours;
}

void display_menu(){
    cout << "Welcome to G.P.A Calculator"<<endl;
    cout << "Enter a Letter Grade: A, B, C, D, F"<<endl;
    cout << "Enter number of credit hours greater than 0"<<endl;
}