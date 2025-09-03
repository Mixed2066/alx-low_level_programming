#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 * @s: string
 * @accept: accept
 *
 * Return: NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
const char *a;
while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
return (s);
}
s++;
}
return (NULL);
}
