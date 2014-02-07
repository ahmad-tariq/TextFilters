#ifndef COUNTER_H
#define COUNTER_H
#include <string>
using namespace std;
class Counter
{
    public:
        Counter();
        virtual int getCount (ifstream& source)=0;
        virtual ~Counter();
    protected:
    private:
};

#endif // COUNTER_H
