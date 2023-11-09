#include "ScalarConverter.hpp"
#include <string>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
}
bool    for_all(std::string str, int ft(int))
{
    for (int i = 0; str[i]; i++)
        if (!ft(str[i]))
            return (false);
    return (true);
}

int check(std::string str)
{
    std::string num;
    int         i;
    float       f;
    double      d;
    int         len;

    len = str.length();
    if (len == 1)
        return (0);
    i = std::stoi(str);
    if (str == std::to_string(i))
        return (1);
    f = std::stof(str);
    if (str == std::to_string(f))
        return (2);
    d = std::stod(str);
    if (str == std::to_string(d))
        return (3);
    return (-1);
}

void    ScalarConverter::convert(std::string str)
{
    int mood;

    mood = check(str);
    if (mood == -1)
    {
        std::cout<<"unkown type"<<std::endl;
        return ;
    }
    switch (mood)
    {
    case 0:
        std::cout<<"char"<<std::endl;
        break;
    case 1:
        std::cout<<"int"<<std::endl;
        break;
    case 2:
        std::cout<<"float"<<std::endl;
        break;
    case 3:
        std::cout<<"double"<<std::endl;
        break;
    default:
        break;
    }
}