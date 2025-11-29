#include <iostream>
using namespace std;

double read_filter();
//Precondition: User will call main()
//Postcondition: Returns a lil read-filter thing.

int main(){
    cout << "Your number is: " << endl << read_filter() << endl;
    return 0;


}

double read_filter(){
    double place_holder;
    cout << "Wait !!!... Give me a double... " << endl;
    cin >> place_holder;
    if (place_holder >= 0)
        return place_holder;
    else
        return 0;
    
}