#ifndef WORDSCOUNTER_H
#define WORDSCOUNTER_H

#include "counter.h"
#include <fstream>
#include <string>
using namespace std;

class WordsCounter : public Counter
{
    public:
        WordsCounter();
        int getCount (ifstream& source);
        virtual ~WordsCounter();
    protected:
    private:
        int CountWords(ifstream& is);
};

#endif // WORDSCOUNTER_H
