#include "main.h"
/**
 * swap_int- function that swaps the values of two integers
 * @a: the char
 * @b: teh char
 */
void swap_int(int *a, int *b)
{
int s;

s = *a;
*a = *b;
*b = s;
}
