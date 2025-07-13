#include "main.h"
void times_table(void)
{
int i = 0, n, k;
while (i < 11)
{
k = 0;
while (k < 10)
{
n = (i * k);
_putchar ('0' + (n / 10) );
_putchar ('0' + (n % 10) );
_putchar (',');
_putchar (' ');
k++;
}
i++;
_putchar ('\n');
}
_putchar ('\n');
}
