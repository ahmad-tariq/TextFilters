#ifndef CHANGELETTERSIZEFILTER_H
#define CHANGELETTERSIZEFILTER_H
#include <string>
#include "filter.h"
#include <fstream>
using namespace std;

class ChangeLetterSizeFilter : public Filter
{
    public:
        ChangeLetterSizeFilter();
        void run(ifstream& source );
        void apply( );
        virtual ~ChangeLetterSizeFilter();
    protected:
    private:
        ofstream output;
        string lines;
};

#endif // CHANGELETTERSIZEFILTER_H
