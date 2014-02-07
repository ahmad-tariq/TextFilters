#include "../include/converttoutf8.h"
#include <windows.h>
#include <string>
#include <fstream>
#include "../include/stxutif.h"
using namespace std;


ConvertToUTF8::ConvertToUTF8()
{
    //ctor
}

ConvertToUTF8::~ConvertToUTF8()
{
    //dtor
}



std::string ConvertToUTF8::to_utf8a(const wchar_t* buffer, int len)
{
   int nChars = ::WideCharToMultiByte(
      CP_UTF8,
      0,
      buffer,
      len,
      NULL,
      0,
      NULL,
      NULL);
   if (nChars == 0) return "";

   string newbuffer;
   newbuffer.resize(nChars);
   ::WideCharToMultiByte(
      CP_UTF8,
      0,
      buffer,
      len,
      const_cast< char* >(newbuffer.c_str()),
      nChars,
      NULL,
      NULL);

   return newbuffer;
}

void ConvertToUTF8::to_utf8(const std::wstring& str )
{

    string txt = to_utf8a(str.c_str(), (int)str.size());

    std::ofstream fs1;
    fs1.open("out.txt");
    fs1<<txt;
    fs1.close();

}
