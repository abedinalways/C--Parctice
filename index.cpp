#include <iostream>
int main()
{
    // int a=1;
    // int b=3;
    // double pi=3.141592653589;
    // int temp=a;
    int x=11;
    int y=x++;
    int z=++x;
    // a=b;
    // b=temp;
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<z<<std::endl;
    std::cout<<x<<std::endl;
    // std::cout << a<<std::endl;
    // std::cout << b<<std::endl;
    // std::cout << pi<<std::endl;
    return 0;
}