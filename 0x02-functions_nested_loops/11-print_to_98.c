#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers till 98
 *
 * Return: void
 */
void print_to_98(int n)
{
int i = n;
while (i < 98)
{
printf("%d , ", i);
i++;
if (i == 98)
{
break;
}
}
while (n > 98)
{
printf("%d , ", n);
n--;
if (i == 98)
{
break;
}
}
}
