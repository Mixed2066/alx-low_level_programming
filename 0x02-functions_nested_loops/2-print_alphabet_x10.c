#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 11)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
