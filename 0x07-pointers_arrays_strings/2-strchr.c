#include "main.h"
#include <stddef.h>
/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * @s: string
 * @c: character
 *
 * Return: NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
return (s);
return (NULL);
}
