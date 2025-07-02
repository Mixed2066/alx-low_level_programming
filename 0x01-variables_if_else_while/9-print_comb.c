#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Return 0 (execution success)
 */
int main(void)
{
int i;
for (i = 1; i < 10; i++)
{
putchar(i + '0');
if (i < 10)
{
putchar(',');
putchar(' ');
}

}
return (0); }
