/*
Learning to code with bitwise operators in C and how they work
*/

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n); 

/*Count 1 bits in x*/
int bitcount(unsigned x); 


main() {
    unsigned n = 13; 

    int x = bitcount(n);  

    printf("%d\n", x); 
}

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p+1-n)) & ~(~0 << n);
}

/*
Excercise 2.9
*/

int bitcount(unsigned x) {
    int b = 0; 

    while ( x != 0) {
        x &= (x - 1); 
        b += 1; 
    }

    return b; 
}

