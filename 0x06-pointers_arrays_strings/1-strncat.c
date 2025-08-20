#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
int i = 0;
while (*dest != '\0')
dest++;
while (*src != '\0' && i < n)
{
*dest++ = *src++;
i++;
}
*dest = '\0';
return (start); }
