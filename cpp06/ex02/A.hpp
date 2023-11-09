#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A: public Base
{
public:
    ~A();
    A()
    {
        std::cout<<"A called"<<std::endl;
    }
};

#endif