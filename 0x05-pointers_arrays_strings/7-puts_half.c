#include "main.h"
/**
 * puts_half - Prints the half of string
 * @str: The input string
 *
 */
void puts_half(char *str)
{
int len, i, mid;
for (len = 0; str[len] != '\0'; len++)
{
}
if (len % 2 == 0)
{
mid = len / 2;
}
else
mid = (len - 1) / 2;

for (i = mid; i <= len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
