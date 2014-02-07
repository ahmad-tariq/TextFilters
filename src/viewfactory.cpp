#include "../include/viewfactory.h"
#include "../include/firstlinesview.h"
#include "../include/lastlinesview.h"
ViewFactory::ViewFactory()
{
    //ctor
}
View* ViewFactory::getView(string name){

    if(name=="first_lines")
        return new FirstLinesView();
    else if(name=="last_lines")
        return new LastLinesView();
}
ViewFactory::~ViewFactory()
{
    //dtor
}
