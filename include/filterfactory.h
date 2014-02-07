#ifndef FILTERFACTORY_H
#define FILTERFACTORY_H
#include "filter.h"
#include <string>
using namespace std;

class FilterFactory
{
    public:
        FilterFactory();
        Filter* getFilter(string name);
        virtual ~FilterFactory();
    protected:
    private:
};

#endif // FILTERFACTORY_H
