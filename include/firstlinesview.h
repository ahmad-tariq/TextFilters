#ifndef FIRSTLINESVIEW_H
#define FIRSTLINESVIEW_H

#include "view.h"


class FirstLinesView : public View
{
    public:
        FirstLinesView();
        string getView(ifstream& source);
        virtual ~FirstLinesView();
    protected:
    private:
        int lines = 3;
};

#endif // FIRSTLINESVIEW_H
