#ifndef REMOVEBLANLINESFILTER_H
#define REMOVEBLANLINESFILTER_H
#include <iostream>
#include "filter.h"
#include <fstream>
using namespace std;
class RemoveBlanLinesFilter : public Filter
{
    public:
        RemoveBlanLinesFilter();
        void run(ifstream& source );
        void apply( );
        virtual ~RemoveBlanLinesFilter();
        ofstream output;
        string lines;
    protected:
    private:
};

#endif // REMOVEBLANLINESFILTER_H
