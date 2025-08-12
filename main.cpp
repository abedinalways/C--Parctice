#include <iostream>
using namespace std;

int main()
{
    constexpr int x=10;
    constexpr int y=33;
    constexpr double z=(x+71)%(y+7);
    cout<<z<<endl;
}
