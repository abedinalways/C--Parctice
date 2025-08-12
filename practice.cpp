#include <iostream>
using namespace std;
int main()
{
    constexpr double sales=8000;
    cout<<"Sales: $"<<sales<<endl;
    constexpr double stateTaxRate=.09;
    constexpr double stateTax=sales*stateTaxRate;
    cout<<"State-Tax: $"<<stateTax<<endl;
    constexpr double countryTaxRate=.04;
    constexpr double countryTax=sales*countryTaxRate;
    cout<<"Country-Tax: $"<<countryTax<<endl;
    double totalTax=stateTax+countryTax;
    cout<<"Total-Tax: $"<<totalTax<<endl;
    return 0;
}