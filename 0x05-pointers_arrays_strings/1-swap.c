#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: Variable to be swaped
 * @b: the second variable to be swaped
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}
