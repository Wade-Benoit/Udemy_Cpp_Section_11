// PASS BY REFERENCE, BEST WAY TO PRINT A VECTOR


#include <iostream>
#include <vector>
#include <string>
using namespace std;


void printVector(const vector<string> &);   //NEED AN & IN THE FUNCTION PROTOTYPE OR WILL CLANG ERROR !!!!!!!!!!!!!!!


int main() {
    
    vector <string> data {"Larry", "Moe", "Curly"};
    
    printVector(data);
    
    return 0;
    
}



void printVector(const vector<string> &v) {
    
    for (auto c : v) {
        cout << c << endl;
    }
}
