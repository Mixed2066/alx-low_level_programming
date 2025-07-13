#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * Return: 0 on success
 */
int print_last_digit(int x)
{
if ((x % 10) > 0)
{
_putchar ((x % 10) + '0');
return (x % 10);
}
else if ((x % 10) == 0)
{
_putchar ((x % 10) + '0');
return (0); }
else
x = -x;
_putchar ((x % 10) + '0');
return ((-x) % 10);
}
