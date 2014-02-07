#ifndef VIEW_H
#define VIEW_H

#include <string>
using namespace std;
class View
{
    public:
        View();
        virtual string getView(ifstream& source)=0;
        virtual ~View();
    protected:
    private:
};

#endif // VIEW_H
