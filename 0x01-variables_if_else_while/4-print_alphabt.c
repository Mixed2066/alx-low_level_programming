#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Return 0 (execution success)
 */
int main(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha == 'q' || alpha == 'e')
continue;
putchar(alpha);
}
putchar('\n');
return (0); }
