#include "../include/addlinesnumerationfilter.h"
#include <iostream>
#include <sstream>

addLinesNumerationFilter::addLinesNumerationFilter()
{
    //ctor
}
string addLinesNumerationFilter::itos(int i) // convert int to string
{
    stringstream s;
    s << i;
    return s.str();
}
void addLinesNumerationFilter::run(ifstream& source){
    string line;
    int i=1;
    while ( getline( source, line ) ) {
             this->lines +=( this->itos(i)+' '+line + '\n');
             i++;
    }
}

void addLinesNumerationFilter::apply(){
    cout << "lines: " << lines;
    (this->output).open("out.txt");
    (this->output) << lines;
    (this->output).close();
}
addLinesNumerationFilter::~addLinesNumerationFilter()
{
    //dtor
}
