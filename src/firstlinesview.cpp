#include "../include/firstlinesview.h"
#include <fstream>
FirstLinesView::FirstLinesView()
{
    //ctor
}
string FirstLinesView::getView(ifstream& source){
    string lines;
    string line;
    int i=0;

    while(getline(source, line) && i < this->lines)
    {
        lines+=(line+'\n');
        i++;
    }

    return lines;

}
FirstLinesView::~FirstLinesView()
{
    //dtor
}
