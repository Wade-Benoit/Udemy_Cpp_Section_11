// FIBBONACCI SEQUENCE with c++


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


unsigned long long fibonaci(unsigned long long);



int main() {


    int choice {};

    cout << "This program shows the fibbonaci sequence starting at the number you choose" << endl;
    cout << "Enter number here: ";
    cin >> choice;

    cout << "Result is " << fibonaci(choice);

}


unsigned long long fibonaci(unsigned long long n) {
    if (n <= 1)
        return n;
    return fibonaci(n-1) + fibonaci(n-2);
}
