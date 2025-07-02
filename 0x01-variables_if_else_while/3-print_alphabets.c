#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Return 0 (execution success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
    /* Prints in small letters*/
putchar(ch);
}
for (int capt = 'A'; capt <= 'Z'; capt++)
{
    /*Prints in capital Letters*/
putchar(capt);
}
return (0); }
