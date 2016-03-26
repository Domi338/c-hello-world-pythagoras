/* 
 * File:   helloworld.h
 * Author: domi338
 *
 */
#include <cmath>

class helloworld {
public:
    char* sentence = "Hello World";
    char* givesentence();
    float pythagoras(float a,float b);
};

char* helloworld::givesentence(){
    return helloworld::sentence;
}

float helloworld::pythagoras(float a, float b){
    //some math here
    //make square of a
    a = pow(a,2.0);
    //make square of b
    b = pow(b,2.0);
    //add a and b together -> square of c
    float csqr = a + b;
    //square root of square c -> c
    float c = sqrt(csqr);
    //give c back
    return c;
}