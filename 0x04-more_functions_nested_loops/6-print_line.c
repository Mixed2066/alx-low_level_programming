#include "main.h"
/**
 * print_line - prints lines for n number times
 *
 * @n: the number of times it will print
 *
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n <= 0)
{
break;
}
_putchar('_');
}
_putchar('\n');
}
