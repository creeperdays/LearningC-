/*
Completeing Excercise 1.5 in chapter 1.3
*/

#include <stdio.h>

main() {
    
    for (int fahr = 300; fahr >= 0; fahr = fahr - 20 ) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

}