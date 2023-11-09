#ifndef SCALARCONVERTER
#define SCALARCONVERTER

#include <iostream>

class ScalarConverter
{
private:
    char    c;
    int     i;
    float   f;
    double  d;
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);
    ~ScalarConverter();
    static void    convert(std::string str);
};

#endif