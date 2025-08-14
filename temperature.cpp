#include <iostream>
using namespace std;
int main()
{
    cout<<"Fahrenheit: ";
    int fahrenheit;
    cin>>fahrenheit;
    double celsius=(fahrenheit-32.0)/1.8;
    cout<<"Celsius: "<<celsius<<endl;
return 0;
}