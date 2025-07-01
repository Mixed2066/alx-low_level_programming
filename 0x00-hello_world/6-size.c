#include<stdio.h>
    /*Entry Point*/
int main(void)
{
    /*Prints size of char*/
printf("Size of a char: %lu byte(s)\n", sizeof(char));
    /*Prints size of int*/
printf("Size of a int: %lu byte(s)\n", sizeof(int));
    /*Prints size of long int*/
printf("Size of a long: %lu byte(s)\n", sizeof(long int));
    /*Prints size of long longint*/
printf("Size of a long long: %lu byte(s)\n", sizeof(long long int));
    /*Prints size of float*/
printf("Size of a float: %lu byte(s)\n", sizeof(float));
    /*Returns 0 after successful run*/
return (0); }
