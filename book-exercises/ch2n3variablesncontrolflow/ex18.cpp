#include <iostream> 
using namespace std;

int main(){
    int num_1, num_2;
    cout << "Number 1, Number 2: " << endl;
    cin >> num_1
        >> num_2;

    int whole_part = num_1 / num_2;
    int remainder = num_1 % num_2;

    cout << "Whole Part: " << whole_part << endl;
    cout << "Remainder: " << remainder << endl;
    
    int x = 10;
    /*
    do{
        cout << x << endl;
        x -= 3;
    } while (x>0);
     */


    x = 10;
    while (x> 0){
        cout << x << endl;
        x -= 3;
    }
    return 0;
}