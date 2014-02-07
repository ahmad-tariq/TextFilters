#ifndef VIEWFACTORY_H
#define VIEWFACTORY_H

#include "view.h"

class ViewFactory
{
    public:
        ViewFactory();
        View* getView(string name);
        virtual ~ViewFactory();
    protected:
    private:
};

#endif // VIEWFACTORY_H
