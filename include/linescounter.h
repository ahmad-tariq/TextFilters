#ifndef LINESCOUNTER_H
#define LINESCOUNTER_H

#include "Counter.h"


class LinesCounter : public Counter
{
    public:
        LinesCounter();
        int getCount (ifstream& source);
        virtual ~LinesCounter();
    protected:
    private:
};

#endif // LINESCOUNTER_H
