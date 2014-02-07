#include "../include/removeblanlinesfilter.h"
#include <iostream>
RemoveBlanLinesFilter::RemoveBlanLinesFilter()
{
    //ctor
}

void RemoveBlanLinesFilter::run(ifstream& source)
{
    string line;
    while ( getline( source, line ) ) {
        if ( ! line.empty() ) {
             this->lines +=( line + '\n');
        }
    }
}
void RemoveBlanLinesFilter::apply(){

    cout << "lines: " << lines;
    (this->output).open("out.txt");
    (this->output) << lines;
    (this->output).close();

}

RemoveBlanLinesFilter::~RemoveBlanLinesFilter()
{
    //dtor
}
