#include <iostream>
using namespace std;

void arr_maker(int a[][5], int dim1);

int main()
{
    int dim1 = 4;
    int a[dim1][5];
    arr_maker(a, dim1);
    cout << "Your final array address: \n" << a;
    return 0;
}

void arr_maker(int a[][5], int dim1)
{
    for (int i = 0; i<dim1; i++)
    {
        cout << "Input 5 ints for row " << i+1 << endl;
        cin >> a[i][0];
        cin >> a[i][1];
        cin >> a[i][2];
        cin >> a[i][3];
        cin >> a[i][4];
    }
    return;


}