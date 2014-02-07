#include "../include/linescounter.h"
#include <fstream>
LinesCounter::LinesCounter()
{
    //ctor
}
int LinesCounter::getCount(ifstream& source){

    int i=0;
    string line;
    while ( getline( source, line ) ) {
        i++;
    }

    return i;

}
LinesCounter::~LinesCounter()
{
    //dtor
}
