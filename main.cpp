/* 
 * File:   main.cpp
 * Author: domi338
 *
 */

#include <cstdlib>
#include <iostream>
#include "helloworld.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    helloworld hw;
    cout << hw.sentence << endl;
    cout << "pythagoras from a = 1, b = 2" << endl;
    cout << hw.pythagoras(1.0,2.0) << endl;
    cout << ":P" << endl;
    return 0;
}

