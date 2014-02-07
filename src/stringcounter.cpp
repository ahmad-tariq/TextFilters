#include "../include/stringcounter.h"
#include <fstream>
#include <string>
using namespace std;
StringCounter::StringCounter()
{
    //ctor
}
int StringCounter::getCount(ifstream& source){

    string line;
    int howMuch=0;

    while(getline(source, line))
    {
        int pos = line.find(this->toFind);
        while(pos!=string::npos)
        {
            howMuch++;
            pos=line.find(this->toFind,pos+1);

        }
    }
    return howMuch;
}
StringCounter::~StringCounter()
{
    //dtor
}
