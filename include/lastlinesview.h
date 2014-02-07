#ifndef LASTLINESVIEW_H
#define LASTLINESVIEW_H

#include "view.h"


class LastLinesView : public View
{
    public:
        LastLinesView();
        string getView(ifstream& source);
        virtual ~LastLinesView();
    protected:
    private:
         int lines = 3;
};

#endif // LASTLINESVIEW_H
