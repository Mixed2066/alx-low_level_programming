#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
char ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++; }
_putchar ('\n');
}

