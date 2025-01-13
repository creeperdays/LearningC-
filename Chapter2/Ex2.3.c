/*
This will convert from hexadecimal to integers in base 10
*/

#include <stdio.h>

#include <string.h>

int htoi(char s[]); 

int atoi(char c); 

int pow1(int base, int power); 


main() {

    char s[] = "1b7e";


    int a = htoi(s); 


    printf("%d\n", a); 
}

int htoi(char s[]) {
    int len = strlen(s); 

    int sum = 0; 

    for (int i = len - 1; i >= 0; i = i - 1) {
        int k = len - 1 - i; 

        sum = sum + atoi(s[i])*pow1(16, k); 


    }

    return sum;
}

/*
Converts the character to a digit
*/
int atoi(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0'; 
    } else if (c == 'A' || c == 'a') {
        return 10; 
    } else if (c == 'B' || c == 'b') {
        return 11; 
    } else if (c == 'C' || c == 'c') {
        return 12; 
    } else if (c == 'D' || c == 'd') {
        return 13; 
    } else if (c == 'E' || c == 'e') {
        return 14; 
    } else {
        return 15; 
    }

}

int pow1(int base, int power) {
    if (power == 0) {
        return 1; 
    } else {
        return base * pow1(base, power - 1); 
    }


}

