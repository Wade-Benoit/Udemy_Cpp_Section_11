//
//  main.cpp
//  Section11_Recursion
//
//  Created by Wade Benoit on 8/25/19.
//  Copyright © 2019 Computer Science 2. All rights reserved.
//





// RECURSION TO Calculate FACTORIALS (8!, 22!, etc)


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


// Prototype

unsigned long long factorial(unsigned long long);   // unsigned long long used because can hold largest integers


int main(int argc, const char * argv[]) {
    int factor {};
    cout << "Enter the number you'd like to find factorial of (example 8!, or 22!) here: ";
    cin >> factor;
    cout << "\n" << factor << "! = " << factorial(factor) << endl;
}




unsigned long long factorial(unsigned long long n) {
    if (n==0) {return 1;}     // This is the BASE CASE

    else {
        return n * factorial(n-1);  // This is the RECURSION CASE!!!!!
    }
}

