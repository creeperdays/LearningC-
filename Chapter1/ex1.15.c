/*
A look into functions using C
*/

#include <stdio.h>

float convert(float fahr); 

main() {
    float fahr, celsius; 
    float lower, upper, step; 

    lower = 0; 
    upper = 300; 
    step = 20; 

    fahr = lower; 

    printf("Fahrenhite  Celsius\n");

    while (fahr <= upper) {
        celsius = convert(fahr); 
        printf("%3.0f %13.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}




float convert(float fahr) {
    float celsius; 

    celsius = (5.0/9.0)*(fahr - 32.0);

    return celsius; 
}

