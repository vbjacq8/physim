#include <iostream>
using namespace std;

int main()
{
    int num_peas, num_pods, peas_per_pod;
    cout << "Number of Peas: \n";
    cin >> num_peas;
    cout << "Number of Pods: \n";
    cin >> num_pods;
    
    peas_per_pod = num_peas / num_pods;

    cout << "Peas per pod: ";
    cout << peas_per_pod;
    cout << "\n";

    return 0;




}