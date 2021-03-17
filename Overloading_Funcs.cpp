// OVERLOADING FUNCTIONS

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Prototypes

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);



//Defintions
void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
    cout << "Printing both strings s: " << s << " , and t: " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: " << endl;

    for (auto c : v) {
        cout << c + " ";
        cout << endl;
    }
}




int main() {

    print(100);

    print('A'); //This will print out 65, the ASCII code for char A

    print(123.5);
    print(123.5F);  // Promotes a float type to a double, uses argumaent as a double



    print("C-style string"); // This is a C-style string literal, will be converted to C++ string type

    string s {"Now this is a C++ String Object"}; //No conversion necessary
    print(s);

    print ("C-style string", s);  // Passing both types of strings, c-style string will be converted




    vector <string> threeStooges {"Larry", "Moe", "Curly"};
    print(threeStooges);           // Passing a vector of strings



    return 0;
}


