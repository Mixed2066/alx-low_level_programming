#include "main.h"
/**
 * print_rev - Prints the string in reverse order
 * @s: The input string
 *
 */

void print_rev(char *s)
{
int length = 0, i;
for (length = 0; s[length] != '\0'; length++)
{

}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
