#ifndef CONVERTTOUTF8_H
#define CONVERTTOUTF8_H
#include <string>
using namespace std;
class ConvertToUTF8
{
    public:
        ConvertToUTF8();
        void to_utf8(const std::wstring& str);
        virtual ~ConvertToUTF8();
    protected:
    private:
        string to_utf8a(const wchar_t* buffer, int len);
};

#endif // CONVERTTOUTF8_H
