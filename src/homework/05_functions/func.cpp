//add include statements
#include "func.h"

//add function code here
double get_gc_content(const string &dna)
{
    //initialize variables
    double gc_count = 0;
    double dna_length = dna.length();

    //loop through dna string
    for (int i = 0; i < dna_length; i++)
    {
        //if dna string is G or C, add to gc_count
        if (dna[i] == 'G' || dna[i] == 'C')
        {
            gc_count++;
        }
    }
    //return gc content
    return (gc_count / dna_length);
}

string get_dna_complement(string dna)
{
    //get reverse dna complement
    string dna_reverse = reverse_string(dna);
    auto dna_reverse_length = dna_reverse.length();
    string dna_complement = "";
    for (int i = 0; i < dna_reverse_length; i++)
    {
        //if dna string is A, replace with T
        if (dna_reverse[i] == 'A')
        {
            dna_complement += 'T';
        }
        //if dna string is T, replace with A
        else if (dna_reverse[i] == 'T')
        {
            dna_complement += 'A';
        }
        //if dna string is C, replace with G
        else if (dna_reverse[i] == 'C')
        {
            dna_complement += 'G';
        }
        //if dna string is G, replace with C
        else if (dna_reverse[i] == 'G')
        {
            dna_complement += 'C';
        }
    }
    return dna_complement;
}

string reverse_string(string dna)
{
    string dna_reverse = "";
    //starting the loop from the end of the string and storing it first to get the reverse
    for (int i = dna.length() - 1; i >= 0; i--)
    {
        dna_reverse += dna[i];
    }
    return dna_reverse;
}