#include <stdio.h>
#include <math.h>

#define pi 3.141592653
#define e  2.718281828
#define sq(x) (x * x)

// typedef and structures
typedef struct{
    double re;
    double im;
} complex;

// macros to ensure that any number created gets assigned imaginary part as zero (0) unless otherwise specified
#define COMPLEX_2(r, i) ((complex){ .re = (r), .im = (i) }) // isse complex_2 define ho raha hai, which is just a complex number with real part 'r', and imaginary part 'i'
#define COMPLEX_1(r)    COMPLEX_2(r, 0.0) // isse complex_1 define ho raha hai, which would handle the case in which a real number is entered, so automatically setting the imaginary part to 0
// black magic
#define GET_MACRO(_1, _2, NAME, ...) NAME
#define scalar(...) GET_MACRO(__VA_ARGS__, COMPLEX_2, COMPLEX_1)(__VA_ARGS__)


// Linear Algebra

complex sumOf(complex a, complex b) {
    complex out;
    out.re = a.re + b.re;
    out.im = a.im + b.im;

    return out;
}

complex diffOf(complex a, complex b) {
    complex out;
    out.re = a.re - b.re;
    out.im = a.im - b.im;

    return out;
}

complex productOf(complex a, complex b) {
    complex out;
    out.re = a.re * b.re;
    out.im = a.im * b.im;

    return out;
}

complex arg(complex a) {
    complex out = scalar(a.im / a.re);

    return out;
}

complex modulus(complex a) {
    complex out = scalar(fabs(sqrt(sq(a.re) + sq(a.im))));
}