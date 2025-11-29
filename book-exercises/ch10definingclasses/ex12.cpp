#include <iostream>
#include <cmath>

using namespace std;

class Temperature
{
public:
    void set(double new_degrees, char new_scale);
    //Sets the member variables to the values given as arguments

    double degrees;
    char scale; //'F' for fahrenheit, 'C' for celsius
};

void Temperature::set(double new_degrees, char new_scale)
{
    degrees = new_degrees;
    scale = new_scale;
}