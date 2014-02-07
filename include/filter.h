#ifndef FILTER_H
#define FILTER_H
#include <string>
using namespace std;

class Filter
{
    public:
        Filter();
        virtual void run(ifstream& source )=0;
        virtual void apply( )=0;
        ~Filter();
    protected:
    private:
};

#endif // FILTER_H
