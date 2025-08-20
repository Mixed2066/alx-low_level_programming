#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 *
 * @dest: the dest
 * @src: the src
 *
 * Return: start
 */
char *_strcat(char *dest, char *src)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return (start); }
