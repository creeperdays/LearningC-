/*
How file copying would be done in C. 
*/

#include <stdio.h>

main()
{
    int c; 

    c = getchar(); 

    while (c != EOF) {
        putchar(c); 
        c = getchar(); 
    }
}

