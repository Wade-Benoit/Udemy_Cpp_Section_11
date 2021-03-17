//
//  main.cpp
//  Section11
//
//  Created by Wade Benoit on 8/23/19.
//  Copyright © 2019 Computer Science 2. All rights reserved.
//







#include <iostream>
#include <cmath>            // All standard math functions
#include <cstdlib>          // C++ STanDard LIBrary, Has Rand and Srand, Better random functions use different header <random>
#include <ctime>            // Required for time() function

using namespace std;



int main(int argc, const char * argv[]) {

    // Loop and make 10 random numbers between 1 and 10 inclusive

    int random_number {};

    size_t count {10};
    int min {1};
    int max {10};

    cout << "What is the RAND_MAX value on my system?" << endl;
    cout << "It is " << RAND_MAX << " on this run." << endl;


    srand(time(nullptr));      //Seeding the rand function to make each successive run different, using the actual time and a nullptr

    //The Loop:

    for (size_t i{0}; i < count; i++) {
        random_number = rand() % max + min;    // IMPORTANT, this takes large random number and puts it in min - max range, [min,max]
        cout << random_number << endl;
    }
    return 0;
}








