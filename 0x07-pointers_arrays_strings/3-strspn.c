#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * @s: string
 * @accept: accept
 *
 * Return: count on success
 */
unsigned int _strspn(char *s, char *accept)
{
int count = 0;
const char *a;
while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
break;
}
if (*a == '\0')
return (count);

count++;
s++;
}
return (count); }
