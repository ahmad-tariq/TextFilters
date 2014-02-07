#ifndef REMOVESTRINGFILTER_H
#define REMOVESTRINGFILTER_H
#include <string>
#include "filter.h"
#include <fstream>
using namespace std;


class RemoveStringFilter : public Filter
{
    public:
        RemoveStringFilter();
        void run(ifstream& source );
        void apply( );
        virtual ~RemoveStringFilter();
    protected:
    private:
        string toDelete = "to do usuniecia";
        ofstream output;
        string lines;
        string itos(int i);
};

#endif // REMOVESTRINGFILTER_H
