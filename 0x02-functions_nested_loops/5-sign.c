#include "main.h"
/**
 * print_sign - prints the sign of an integer
 *
 * Return: 0 or 1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
_putchar (' ');
return (1); }
else if (n < 0)
{
_putchar ('-');
_putchar (' ');
return (1); }
else if (n == 0)
_putchar ('0');
_putchar (' ');
return (0);
}
