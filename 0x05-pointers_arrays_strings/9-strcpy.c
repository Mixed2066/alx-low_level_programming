#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: location to copy the string to
 * @src: string to copy
 *
 * Return: temp on success
 */

char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (temp); }
