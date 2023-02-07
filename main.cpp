#include <iostream>
#include <cstdlib>

class mathfrod2
{
    public:
        mathfrod2();
        ~mathfrod2();
        int lol()
        int a;
        int b;
};

class mathfrod
{
    public:
        mathfrod();
        ~mathfrod();
        int simple_add(int a, int b);
        int a;
        int b;
        int c;
};

mathfrod2::mathfrod2()
{}
mathfrod2::~mathfrod2()
{}

mathfrod::mathfrod()
{}
mathfrod::~mathfrod()
{}

int mathfrod::simple_add(int a, int b){
    this->a = a; this->b = b; this->c = this->a + this->b;
    std::cout << "a + b = " << this->c << std::endl;
    return this->c;
}

int main(int ac, char **av)
{
    mathfrod2 math;
    mathfrod math1;
    if (ac != 3)
        return 84;
   math1simple_add(atoi(av[1]), atoi(av[2]));
    return 0;;
}