#include <iostream>//add include statements
#include <algorithm>
#include <string>
#include "dna.h"

using namespace std;

//add function(s) code here


double get_gc_content (const string & dna){
 //total must be declared outside the loop so it doesn't get reset over and over in the loop   
    double total = 0;
    for (char ch : dna){
        if (ch == 'G' || ch == 'C')
            total++;
}
    double gc_percentage = total / dna.size();
    return gc_percentage;
}
//const is a lock - cannot be changed and ensure no one can change it 
string get_dna_complement(const string & dna){
    string complement;
    for (char ch : dna){
        if (ch == 'A'){
            complement += 'T';
        }
        else if (ch == 'T'){
            complement += 'A';
        }
        else if (ch == 'G'){
            complement += 'C';
        }
        else if (ch == 'C'){
            complement += 'G';
        }
    }
    return get_reverse_string(complement);
}

//returns a reverse string
 string get_reverse_string(string dna){
    reverse(dna.begin(), dna.end()); 
    return dna;
 }
