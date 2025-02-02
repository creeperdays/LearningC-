#include <stdio.h>



char lower1(int a); 

main()
{
    int c = 'Z'; 

    char x = lower1(c); 

    printf("%c\n", x); 

}

char lower1(int a) {
    return (a <= 'Z' && a >= 'A' ) ? a + 'a' - 'A' : a; 
}






