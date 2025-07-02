#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Return 0 (execution success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
/*Prints for a positive number*/
printf("%d is a positive \n", n);
else if (n < 0)
/*Prints for a negative number*/
printf("%d is a negative \n", n);
else
/*Prints for zero*/
printf("%d is zero\n", n);
return (0); }
