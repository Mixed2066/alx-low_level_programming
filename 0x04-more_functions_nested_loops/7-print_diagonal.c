#include "main.h"
/**
 * print_diagonal - prints lines for n number times digonally
 *
 * @n: the number of times it will print
 *
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
