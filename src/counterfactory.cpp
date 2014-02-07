#include "../include/counterfactory.h"
#include "../include/wordscounter.h"
#include "../include/linescounter.h"
#include "../include/charscounter.h"
#include "../include/stringcounter.h"
CounterFactory::CounterFactory()
{
    //ctor
}
Counter* CounterFactory::getCounter(string name)
{
    if(name=="words_counter")
        return new WordsCounter();
    else if(name=="lines_counter")
        return new LinesCounter();
    else if(name == "chars_counter")
        return new CharsCounter();
    else if(name == "string_counter")
        return new StringCounter();
}
CounterFactory::~CounterFactory()
{
    //dtor
}
