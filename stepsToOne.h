#include <iostream>

unsigned long long  StepsToOne(unsigned long long num)
{
    unsigned long long amountOfsteps = 0;
    bool end = false;
    while(!end)
    {
        if(num == 1)
        {
            break;
        }

        if(num%2 == 0)
        {
            num /=2;
            std::cout <<num<< std::endl;
        }
        else
        {
            num  = num*3+1;
            std::cout <<num<< std::endl;
        }
        amountOfsteps ++;
    }
    return amountOfsteps;
}

