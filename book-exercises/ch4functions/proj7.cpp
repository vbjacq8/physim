#include <iostream>
#include <cmath>
using namespace std;


const double G = 6.673e-8;

double force_calc(double mass1, double mass2, double distance);
//precondition: user inputs two masses and the distance between the two
//postcondition: user gets the gravitational force in dynes. 

int main(){
    double mass1, mass2, distance, force;
    cout << "Input mass 1: \n";
    cin >> mass1;
    cout << endl;
    cout << "Input mass 2: \n";
    cin >> mass2;
    cout << endl;
    cout << "Input distance: \n";
    cin >> distance;
    force = force_calc(mass1, mass2, distance);
    cout << endl << "Force: " << force << " dynes\n";
    return 0;

}

double force_calc(double mass1, double mass2, double distance)
{
    return G* mass1 * mass2 / pow(distance, 2.0);
}