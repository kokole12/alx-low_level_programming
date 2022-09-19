#include "main.h"

/**
 * swap_int -  swaps two intergers
 *
 * @a: variable 1
 * @b: are the comparison integers
 *
 */
void swap_int(int *a, int *b)
{
int x = *a;
int y = *b;

*a = y;
*b = x;
}
