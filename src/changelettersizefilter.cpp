#include "../include/changelettersizefilter.h"
#include <iostream>
ChangeLetterSizeFilter::ChangeLetterSizeFilter()
{
    //ctor
}

void ChangeLetterSizeFilter::run(ifstream& source){

    string line ;
    int i;
    while( getline( source, line ) )
    {
        for (i=0; i < line.length(); i++)
        {
             if (isupper(line[i]))
             {
                line[i] = tolower(line[i]);
             }
             else
             {
                line[i] = toupper(line[i]);
             }
        }

        this->lines+=(line+'\n');

    }

}

void ChangeLetterSizeFilter::apply(){

    (this->output).open("out.txt");
    (this->output) << lines;
    (this->output).close();

}


ChangeLetterSizeFilter::~ChangeLetterSizeFilter()
{
    //dtor
}
