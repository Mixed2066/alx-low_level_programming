#include "main.h"
/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: unsigned integer
 *
 * Return: dest on success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int temp, i;
for (i = 0; i < n; i++)
{
temp = src[i];
src[i] = dest[i];
dest[i] = temp;
}
return (dest); }
