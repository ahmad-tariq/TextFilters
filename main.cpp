#include <iostream>
#include <fstream>
#include <string>
#define FILE "file.txt"
#include "include\filterfactory.h"
#include "include\counterfactory.h"
#include "include\viewfactory.h"
using namespace std;

int main()
{
    ifstream source;
    source.open(FILE);
    

    //FilterFactory* factory = new FilterFactory();
    //Filter* f1 = factory->getFilter("replace_string");
    //f1->run(source);
    //f1->apply();

    //CounterFactory* cFactory = new CounterFactory();
    //Counter* c1 = cFactory->getCounter("string_counter");
    //cout<<"Wyrazen w pliku: "<< c1->getCount(source);



    //ViewFactory* vFactory = new ViewFactory();
    //View* v1 = vFactory->getView("last_lines");
    //cout<<v1->getView(source);

    source.close();

    return 0;
}
