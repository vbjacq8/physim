#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

double windchill(double v, double t);
//Precondition: inserts v in m/sec, temeprature in degrees celsius
//Postcondition: returns windchill index in celsius

int main()
{
    double v, t, W;
    cout << "Enter windspeed in m/s and then temperature: \n";
    cin >> v;
    cin >> t;
    W = windchill(v,t);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    cout << "Your windchill index is " << W << endl;
}

double windchill(double v, double t)
{
    assert(t <= 10);
    return 13.12 + 0.6215*t - 11.37 * pow(v, 0.16) + 0.3965*t*pow(v,0.016);



}
