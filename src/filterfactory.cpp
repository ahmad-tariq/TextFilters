#include "../include/filterfactory.h"
#include "../include/removeblanlinesfilter.h"
#include "../include/addlinesnumerationfilter.h"
#include "../include/changelettersizefilter.h"
#include "../include/changetabtospacefilter.h"
#include "../include/removestringfilter.h"
#include "../include/replacestringfilter.h"
FilterFactory::FilterFactory()
{
    //ctor
}

Filter* FilterFactory::getFilter(string name){

    if(name=="blank_lines_remove")
        return new RemoveBlanLinesFilter();
    else if (name=="add_lines_numeration")
        return new addLinesNumerationFilter();
    else if (name=="change_letter_size")
        return new ChangeLetterSizeFilter();
    else if (name=="change_tab_to_spaces")
        return new ChangeTabToSpaceFilter();
    else if (name=="remove_string")
        return new RemoveStringFilter();
    else if (name=="replace_string")
        return new ReplaceStringFilter();
}

FilterFactory::~FilterFactory()
{
    //dtor
}
