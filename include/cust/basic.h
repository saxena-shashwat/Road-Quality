#include <stdio.h>
#include <math.h>


typedef struct{
    double re;
    double im;
} complex;


#define pi 3.141592653
#define e  2.718281828
#define sq(x) (x * x)
#define COMPLEX_2(r, i) ((complex){ .re = (r), .im = (i) })
#define COMPLEX_1(r)    COMPLEX_2(r, 0.0)
#define GET_MACRO(_1, _2, NAME, ...) NAME
#define COMPLEX(...) GET_MACRO(__VA_ARGS__, COMPLEX_2, COMPLEX_1)(__VA_ARGS__)


complex sumOf(complex a, complex b);
complex diffOf(complex a, complex b);
complex productOf(complex a, complex b);
complex arg(complex a);
complex modulus(complex a);