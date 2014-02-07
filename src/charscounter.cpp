#include "../include/charscounter.h"

CharsCounter::CharsCounter()
{
    //ctor
}
int CharsCounter::getCount(ifstream& source){

    int i=0;
    char temp;
    string line;
    while ( !source.eof() ) {
        source.get(temp);
        i++;
    }

    return i-1;

}
CharsCounter::~CharsCounter()
{
    //dtor
}
