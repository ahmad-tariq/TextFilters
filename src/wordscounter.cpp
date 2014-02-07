#include "../include/wordscounter.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
WordsCounter::WordsCounter()
{
    //ctor
}

int WordsCounter::CountWords(ifstream& is)
{
	int c = 0;
	for(string w; is >> w; ++c);
	return c;
}


int WordsCounter::getCount(ifstream& source){

    int iWords = this->CountWords(source);
    return iWords;
}

WordsCounter::~WordsCounter()
{
    //dtor
}
