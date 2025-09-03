#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum1, sum2);
}
