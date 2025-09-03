#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * @s: constant byte
 * @b: constant byte
 * @n: unsigned integer
 *
 * Return: s on success
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s); }
