#ifndef CHARSCOUNTER_H
#define CHARSCOUNTER_H
#include <fstream>
#include "counter.h"
using namespace std;

class CharsCounter : public Counter
{
    public:
        CharsCounter();
        int getCount(ifstream& source);
        virtual ~CharsCounter();
    protected:
    private:
};

#endif // CHARSCOUNTER_H
