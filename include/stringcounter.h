#ifndef STRINGCOUNTER_H
#define STRINGCOUNTER_H

#include <fstream>
#include "counter.h"
using namespace std;


class StringCounter : public Counter
{
    public:
        StringCounter();
        int getCount(ifstream& source);
        virtual ~StringCounter();
    protected:
    private:
        string toFind = "znajdzmnie";
};

#endif // STRINGCOUNTER_H
