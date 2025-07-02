#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Return 0 (execution success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
int ch;
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0); }
