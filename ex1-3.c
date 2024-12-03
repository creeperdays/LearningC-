/*
Completing Excercise 1-3 in chapter 1.2 
*/

#include <stdio.h>

main() {
    float fahr, celsius; 
    float lower, upper, step; 

    lower = 0; 
    upper = 300; 
    step = 20; 

    fahr = lower; 

    printf("Fahrenhite  Celsius\n");

    while (fahr <= upper) {
        celsius = (5.0/9.0)*(fahr - 32.0);
        printf("%3.0f %13.1f\n", fahr, celsius);
        fahr = fahr + step; 
    }
}






