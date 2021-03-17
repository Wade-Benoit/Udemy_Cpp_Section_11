// PASS BY REFERENCE - IMPORTANT!!!!!!!!!!!

#include<iostream>
using namespace std;


//prototype

void swap(int &a, int &b);


int main() {
    int a{10}, b{20};

    cout << "int a is " << a << " and b is " << b << endl;

    swap(a, b);
    cout << "After swapping: " << endl;

    cout << "int a is " << a << " and b is " << b << endl;
}


void swap(int &a, int &b) {       // the &a, &b actually changes the values being passed in in the main function, whatever those variables are
    int temp{};
    temp = a;
    a = b;
    b = temp;
}

