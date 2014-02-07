#include "../include/removestringfilter.h"
#include <iostream>
#include <sstream>
RemoveStringFilter::RemoveStringFilter()
{
    //ctor
}
string RemoveStringFilter::itos(int i) // convert int to string
{
    stringstream s;
    s << i;
    return s.str();
}
void RemoveStringFilter::run(ifstream& source)
{

    string line;
    int iLine=1;
    string toCount;
    while ( getline( source, line ) ) {

        while(true)
        {
            size_t found = line.find(this->toDelete);
            if (found==std::string::npos)
            {
                this->lines +=( line + '\n');
                break;
            }
            else{
                toCount.append(this->itos(iLine)+' '+line+'\n');
                line.erase(found, this->toDelete.length());
            }
        }
        iLine++;

    }

    cout<<toCount;

}
void RemoveStringFilter::apply(){
    (this->output).open("out.txt");
    (this->output) << lines;
    (this->output).close();
}
RemoveStringFilter::~RemoveStringFilter()
{
    //dtor
}
