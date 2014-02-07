#include "../include/lastlinesview.h"
#include <fstream>
#include <list>
using namespace std;
LastLinesView::LastLinesView()
{
    //ctor
}
string LastLinesView::getView(ifstream& source){

    list< string > lines;

    string line;


    while(getline(source, line))
    {
        lines.push_back(line+'\n');

    }
    string toReturn;
    list < string >::reverse_iterator it_lines;
    int i=0;
    for( it_lines=lines.rbegin(); it_lines!=lines.rend(); ++it_lines )
    {
       toReturn+=(*it_lines);
       i++;
       if(i>=3) break;
    }

    return toReturn;

}
LastLinesView::~LastLinesView()
{
    //dtor
}
