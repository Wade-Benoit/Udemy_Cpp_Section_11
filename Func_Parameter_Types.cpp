// Formal Vs Actual Parameters, How actual parameters are copied but not changed
// This is PASS BY VALUE

#include <iostream>
using namespace std;


void paramTest (int formal);



int main() {

    int actual {50};


    cout << "Actual value is " << actual << endl;
    paramTest(actual);
    cout << "After function actual value is " << actual << endl;
}


void paramTest (int formal) {

    formal += 50;

    cout << "Value of formal is now " << formal << endl;

}

