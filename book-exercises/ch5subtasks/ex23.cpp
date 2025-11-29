#include <cassert>
#include <iostream>
using namespace std;

void f(double& x, double y, double z);

int main()
{
    double x, y, z;
    cout << "Enter 3 doubles: \n";
    cin >> x
        >> y
        >> z;
    
    f(x,y,z);
    cout << "Here are your values: \n" << x << endl << y << endl << z << endl;
    return 0;

}

void f(double& x, double y, double z)
{
    assert(z != 0);
    x = x*y / z;
    return;
}
