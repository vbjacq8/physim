#include <iostream>
using namespace std;

int main()
{
    int bro(5), cha, cho;

    double billy(5), bob, joe;
    int count(0);
    double distance(1.5);

    cout << bro;
    cout << "\n";
    cout << cha;
    cout << "\n";
    cout << cho;
    cout << "\n";
    cout << billy;
    cout << "\n";
    cout << bob;
    cout << "\n";
    cout << joe;
    cout << "\n";

    double billy_squared(billy*5);
    cout << billy_squared;
    cout << "\n";

    double quantity_1, quantity_2;

    cout << "Enter Quantity 1\n" << "Enter Quantity 2\n";
    cin >> quantity_1 
        >> quantity_2;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "I'll repeat back your quantities... \n" << "Quantity 1: " << quantity_1 << endl << "Quantity 2: " << quantity_2 << endl;

    return 0;
}