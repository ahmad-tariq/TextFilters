#ifndef CHANGETABTOSPACEFILTER_H
#define CHANGETABTOSPACEFILTER_H

#include "filter.h"
#include <fstream>
using namespace std;

class ChangeTabToSpaceFilter : public Filter
{
    public:
        ChangeTabToSpaceFilter();
        void run(ifstream& source );
        void apply( );
        virtual ~ChangeTabToSpaceFilter();
    protected:
    private:
        string generateSpaces();
        ofstream output;
        string lines;
        int spaces=1;
};

#endif // CHANGETABTOSPACEFILTER_H
