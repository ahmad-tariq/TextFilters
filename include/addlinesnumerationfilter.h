#ifndef ADDLINESNUMERATIONFILTER_H
#define ADDLINESNUMERATIONFILTER_H
#include "filter.h"
#include <fstream>
class addLinesNumerationFilter : public Filter
{
    public:
        addLinesNumerationFilter();
        void run(ifstream& source );
        void apply( );
        virtual ~addLinesNumerationFilter();

    protected:
    private:
        ofstream output;
        string lines;
        string itos(int i);
};

#endif // ADDLINESNUMERATIONFILTER_H
