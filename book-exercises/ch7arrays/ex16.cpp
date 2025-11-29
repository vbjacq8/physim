#include <cmath>
#include <iostream>
using namespace std;

int out_of_order(double d[], int size);

int main()
{
    double d[5] = {1.23, 4.56, 7.89, 2.34, 5.67};
    cout << out_of_order(d, 5) << endl ;
    cout << "TEST!" << endl;
    return 0;
}

int out_of_order(double d[], int size)
{
    int i = 0;
    do
    {
        if (d[i] >= d[i+1])
        {
            return i;
        }
        i++;
    } while (i<size);
    return -1;
}






