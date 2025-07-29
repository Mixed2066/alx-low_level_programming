#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
int count = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != '\0')
count++;
}
return (count); }
