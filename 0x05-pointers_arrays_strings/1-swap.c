#include "main.h"
/**
 * swap_int - swaps integer of a to b
 * @a: interger a
 * @b: integer b
 *
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
