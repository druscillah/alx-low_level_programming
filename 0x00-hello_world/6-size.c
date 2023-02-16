#include<stdio.h>
int main()
 {
    char charType;
    int intType;
    long intType;
    long long intType;
    float floatType;
    
    

    // sizeof evaluates the size of a variable
    printf("Size of char: %zu bytes\n", sizeof(charType));
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of long: %zu bytes\n", sizeof(longType));
    printf("Size of long long: %zu byte\n", sizeof(longlongType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    return (0);
}
