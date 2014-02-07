#include "../include/replacestringfilter.h"

ReplaceStringFilter::ReplaceStringFilter()
{
    //ctor
}
void ReplaceStringFilter::run(ifstream& source)
{

    string line;
    while ( getline( source, line ) ) {

        while(true)
        {
            size_t found = line.find(this->stringSource);
            if (found==std::string::npos)
            {
                this->lines +=( line + '\n');
                break;
            }
            else{
                line.erase(found, this->stringSource.length());
                line.insert(found, this->stringDestination);
            }
        }


    }


}
void ReplaceStringFilter::apply(){
    (this->output).open("out.txt");
    (this->output) << lines;
    (this->output).close();
}
ReplaceStringFilter::~ReplaceStringFilter()
{
    //dtor
}
