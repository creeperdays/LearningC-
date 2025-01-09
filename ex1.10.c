#include <stdio.h>

main() {
    int c; 

    int count = 0; 

    c = getchar(); 

    while ((c = getchar()) != EOF)
    {
        if (c == '  ') {
            putchar('\t'); 
        }

        if (c == '\b') {
           putchar('\b');
        } 

        if (c == '\\') {
            putchar('\\');
        }
    }
    




}