// #include "Serializer.hpp"

// int main(void)
// {
//     Data        *var = new Data();
//     uintptr_t   ptr;

//     var->msg = "elkamal mohamed";
//     var->r = 101;
//     ptr = Serializer::serialize(var);
//     std::cout<<"msg : "<<Serializer::deserialize(ptr)->msg<<std::endl;
//     std::cout<<"r   : "<<Serializer::deserialize(ptr)->r<<std::endl;
// }

#include <iostream>

class tst
{
private:
    static int a;
public:
    static void display()
    {
        std::cout<<"hell"<<std::endl;
    }
};

int main(void)
{
    tst     var;

    var.display();
}