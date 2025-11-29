#include <iostream>
using namespace std;

int main()
{
    const double liters_per_gallon(3.78533);
    double num_gallons, num_liters;
    cout << "Number of gallons: ";
    cin >> num_gallons;
    num_liters = num_gallons * liters_per_gallon;
    cout << "Number of liters: " << num_liters << endl;
    
    return 0;


}