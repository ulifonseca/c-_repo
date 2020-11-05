#include <iostream>

int main()
{
    int b=0;
    std::cout<<"Foor loop..."<<std::endl;
    for (int i = 1; i <= 5; i++)
    {
        std::cout<<i<<std::endl;
    }
    std::cout<<"While loop..."<<std::endl;
    while(b<3)
    {
        std::cout<<"Miriam"<<std::endl;
        b++;
    }
    
    return 0;
}