#include <iostream>
#include "dna.h"

//write using statements
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
using std :: string;
using std :: cout;
using std :: cin;
using std::endl;

int main() 
{
    string dna;
	
    cout << "Enter DNA sequence:\n";
	cin >> dna;

    //making a new variable called gc_percentage, and setting it equal to the return value from the function call
    double gc_percentage = get_gc_content(dna);
    string dna_complement = get_dna_complement(dna);
    string reverse_dna = get_reverse_string(dna);

cout << "The GC percentage is: " << gc_percentage <<endl;
cout << "The DNA complement is: " << dna_complement << endl;
cout << "The reverse DNA is: " << reverse_dna << endl;

return 0;

}