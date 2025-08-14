#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double result=floor(4.5);
    cout<<result<<endl;
    double yen=pow(3,4);
    cout<<yen<<endl;
    //write a program to calculate the area of a circle
   cout<<"Radius: ";
    double radius;
    cin>>radius;
    const double pi=3.141592653589;
    cout<<"Area: "<<pi*pow(radius,2)<<endl;
    return 0;
}