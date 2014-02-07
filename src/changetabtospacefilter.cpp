#include "../include/changetabtospacefilter.h"
#include <iostream>
using namespace std;
ChangeTabToSpaceFilter::ChangeTabToSpaceFilter()
{
    //ctor
}


string ChangeTabToSpaceFilter::generateSpaces(){

    string toReturn;
    for(int i=0;i<this->spaces;i++)
    {

        toReturn.append(" ");

    }

    return toReturn;
}
void ChangeTabToSpaceFilter::run(ifstream& source){


    string spaces = this->generateSpaces();
    string line;
    int i;
    char c;
    while (source.get(c) ) {
        if (c == '\t' )
            this->lines+=spaces;
        else
            this->lines+=c;
    }

}

void ChangeTabToSpaceFilter::apply(){

    (this->output).open("out.txt");
    (this->output) << lines;
    (this->output).close();

}

ChangeTabToSpaceFilter::~ChangeTabToSpaceFilter()
{
    //dtor
}
