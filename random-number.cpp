#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int number= rand()%10; //number (1-9)
    cout<<number<<endl;

    const short MaxValue=6;
    const short MinValue=1;
    srand(time(0));
    short first=(rand()%(MaxValue-MinValue+1))+MinValue; //number(1-6)
    short second=(rand()%(MaxValue-MinValue+1))+MinValue;
    cout<<first<<","<<second<<endl;
    return 0;
}