#include <stdio.h>

main() {
    int c; 

    int count = 0; 

    c = getchar(); 

    while ((c = getchar()) != EOF)
    {
        if (c == '\n') {
            ++count;
        }

        if (c == ' ') {
            ++count; 
        } 

        if (c == '  ') {
            ++count; 
        }
    }
    




}