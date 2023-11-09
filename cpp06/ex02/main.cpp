#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base*   generate(void)
{
    Base    *ptr;
    int     r;

    srand(time(0));
    r = rand() % 3;
    switch (r)
    {
        case 0:
            ptr = new A();
            break;
        case 1:
            ptr = new B();
            break;
        case 2:
            ptr = new C();
            break;
    }
    if (ptr)
        return (ptr);
    return (NULL);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
    static int  i;

    try
    {
        switch (i++)
        {
            case 0:
                dynamic_cast<A&>(p);
                std::cout << "A" << std::endl;
                break;
            case 1:
                dynamic_cast<B&>(p);
                std::cout << "B" << std::endl;
                break;
            case 2:
                dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                break;
            default:
                std::cout<<"Unknown type"<<std::endl;
                break;
        }
    }
    catch (...)
    {
        identify(p);
    }
}

int main(void)
{
    Base    *ptr;

    ptr = generate();
    identify(ptr);
    std::cout<<"-----"<<std::endl;
    identify(*ptr);
}