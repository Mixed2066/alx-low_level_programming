#include "main.h"
/**
 * print_square - prints square for size number times
 *
 * @size: the number of times it will print
 *
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
