#include "main.h"
/**
 * print_triangle - prints traiangle for size number times
 *
 * @size: the number of times it will print
 *
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
