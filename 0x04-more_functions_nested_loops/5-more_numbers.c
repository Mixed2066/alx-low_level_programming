#include "main.h"
/**
 * more_numbers - prints 0 to 14, 10 times
 *
 */
void more_numbers(void)
{
int i = 0, j;
while (i <= 10)
{
j = 0;
while (j <= 14)
{
if (j < 10 && j >= 0)
{
_putchar('0' + j);
j++;
}
else
_putchar('0' + (j / 10));
_putchar('0' + (j % 10));
j++;
}
_putchar('\n');
i++;
}
}
