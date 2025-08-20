#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: dest
 * @src: src srource string
 * @n: the number of words
 *
 * Return: pointer to encoded string
 */
char *_strncpy(char *dest, char *src, int n)
{
{
char *temp = dest;
int i = 0;
while (*src != '\0' && i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
*dest = '\0';
return (temp); }

}
