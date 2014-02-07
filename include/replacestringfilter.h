#ifndef REPLACESTRINGFILTER_H
#define REPLACESTRINGFILTER_H

#include <string>
#include "filter.h"
#include <fstream>
using namespace std;


class ReplaceStringFilter : public Filter
{
    public:
        ReplaceStringFilter();
        void run(ifstream& source );
        void apply( );
        virtual ~ReplaceStringFilter();
    protected:
    private:
        string stringSource = "dozamiany";
        string stringDestination = "nato";
        ofstream output;
        string lines;
        string itos(int i);
};

#endif // REPLACESTRINGFILTER_H
