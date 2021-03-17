// PASSING ARRAYS INTO FUNCTIONS

#include<iostream>
#include<cmath>
#include<vector>

using namespace std;


//prototypes

void printArray(const int [], size_t);   //Use const to ensure the array values aren't changed when printing

void setArray(int [], size_t, int);



int main() {

    int arrayOne[] {10, 6, 3, 8, 4, 0};

    printArray(arrayOne, 6);


    setArray(arrayOne, 6, 7);

    printArray(arrayOne, 6);

}



void printArray(const int arr[], size_t size) {

    for(size_t i{0}; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}




void setArray(int arr[], size_t size, int value) {
    for (size_t i{0}; i < size; i++) {
        arr[i] = value;
    }
}

