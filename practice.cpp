#include <iostream>
using namespace std;
int main()
{
    constexpr double sales=8000;
    cout<<"Sales: $"<<sales<<endl;
    constexpr double stateTax=sales*.05;
    cout<<"State-Tax: $"<<stateTax<<endl;
}