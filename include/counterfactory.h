#ifndef COUNTERFACTORY_H
#define COUNTERFACTORY_H
#include "counter.h"

class CounterFactory
{
    public:
        CounterFactory();
        Counter* getCounter(string name);
        virtual ~CounterFactory();
    protected:
    private:
};

#endif // COUNTERFACTORY_H
