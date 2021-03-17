//
//  main.cpp
//  Section11_Challenge
//
//  Created by Wade Benoit on 8/25/19.
//  Copyright © 2019 Computer Science 2. All rights reserved.
//


/*
 Challenge 11:
 
 Modularize your Section 9 Challenge, using functions and a vector to do all choices.
 
 
 
*/

//________________________________________

// Print a Menu with the options:
// P - Print numbers
// A - Add a number
// M - Display mean of the numbers
// S- Display the smallest number
// L - Display the largest number
// Q - Quit



// ____________________________________________

// 1)  Print Menu - Validate the option entered, upper or lower case

// 2) if P, print array, if empty list "[] - list is empty", if not seperated by " ";
// 3) if A, add a number to the array (vector would be best), display "added (added int)"
// 4) if M, Display the mean of the numbers in array, if no list display "Unable to calculate the mean - no data"
// 5) if S, Display the smallest number, if no list display "Unable to determinde smallest number - list is empty;
// 6) if L, Display the largest number   etc etc
// 7) if Q, End program.



#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//Prototypes

char getChoice();
void printMenu();
void printArray(const vector <int> &);
void addANumber(vector <int> &);
void calcMean(const vector<int> &);
void smallestNum(const vector<int>);
void largestNum(const vector<int>);
void handleFind(const vector<int> &);
bool findNum(const vector<int> &, int);



int main () {

char choice {}; // selection character
bool isOver {false}; // boolean for flag in do-while
vector <int> numberList {}; // Vector used dynamically with input

    
    
  

do {
    
    printMenu();
    
    choice = getChoice();
    
    
    if (choice == 'P') {
        printArray(numberList);
    }
    
    else if (choice == 'A') {
        addANumber(numberList);
    }
    
    else if (choice == 'M') {
        calcMean(numberList);
    }
    
    else if (choice == 'S')
        smallestNum(numberList);
    
    
    
    else if (choice == 'L')
        largestNum(numberList);
    
    else if (choice == 'F')
        handleFind(numberList);
    
    else if (choice == 'Q') {
        cout << "Thank you, Goodbye" << endl;
        isOver = true;
        
    }
    
    
    else {
        cout << "ILLEGAL SUBMISSION USE MENU" << endl;
    }
    
    
    
}
    
while (isOver == false);
return 0;
}







// FUNCTION DEFINITIONS


char getChoice() {
    char chosen;
   
    cout << "\n\nEnter your choice here: " << endl;
    cin >> chosen;
  
    return toupper(chosen);

}


void printMenu () {
    cout << endl << endl << endl;
    cout << "********************************"<< endl;
    cout << "P - Print Numbers"               << endl;
    cout << "A - Add Number"                  << endl;
    cout << "M - Display the mean"            << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number"  << endl;
    cout << "F - Find a Number"               << endl;
    cout << "Q - End the Program"             << endl;
    cout << "********************************";
  
}



void printArray(const vector<int> &numberList) {
    if (numberList.size() != 0) {
        cout << "\n[ ";
        for (auto val : numberList) {
            cout << val << " ";
        }
        cout << "]";
    }
    else {
        cout << "List is empty" << endl;
    }
}




void addANumber(vector <int> &numberList) {
    
   int addNumber{};
cout << "Enter number to add to list: " << endl;
cin >> addNumber;
numberList.push_back(addNumber);
cout << addNumber << " has been added to the list" << endl;
}



void calcMean(const vector<int> &numberList) {
cout << "Now displaying the mean of your number list: " << endl;
if (numberList.size() != 0)

{
    int accumulator {};

    for(auto val : numberList) {
        accumulator += val;
    }

    double mean = static_cast<double>(accumulator) / numberList.size();
    cout << "The average of your list is " << mean << endl;
}
else {
    cout << "Unable to calculate the mean - no data" << endl;
    }
}



void smallestNum(vector <int> numberList) {

if (numberList.size() != 0) {
    
    int temp = numberList[0];
    for (int i = 0; i < (numberList.size() - 1); i++) {
        if(temp > numberList[i]) {
            temp = numberList[i];
        }
    }
    cout << "The smallest number in your list is " << temp << endl;
    }
    else {
        cout << "Unable to determinde smallest number - list is empty" << endl;
        }
}


void largestNum(vector<int> numberList) {

if (numberList.size() != 0) {
    
    int temp = numberList[0];
    for (int i = 0; i < numberList.size(); i++) {
        if(temp < numberList[i]) {
            temp = numberList[i];
        }
    }
    cout << "The largest number in your list is " << temp << endl;
    }
    else {
        cout << "Unable to determinde largest number - list is empty" << endl;
        }
}


void handleFind(const vector<int> &numberList) {
    int target{};
    cout << "Enter the number to find: " ;
    cin >> target;
    
    
    if(findNum(numberList, target)) {
        cout << "Target was found" << endl;
    }
        else {
            cout << "Target wasn't found" << endl;
        }
    }


bool findNum(const vector<int> &v, int target) {
    for (auto num : v) {
        if (num == target) {
            return true;
        }
    }
        return false;
}
