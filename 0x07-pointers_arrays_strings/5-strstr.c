#include "main.h"
#include <stddef.h>
/**
 * _strstr - find the first occurrence of the substring needle in the string
 * @haystack: memory area to copy from
 * @needle: finds this in haystack string
 *
 * Return: NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
const char *a;
while (*haystack)
{
for (a = needle; *a; a++)
{
if (*haystack == *needle)
return (haystack);
}
haystack++;
}
return (NULL);
}
