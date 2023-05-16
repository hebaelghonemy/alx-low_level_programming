#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array -  a function that creates an array of char.
 * @c: a specific char
 * @size: the size of the memory to print
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
int i;
char *h;
h = malloc(size * sizeof(char));
if (size == 0 || h == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
h[i] = c;
}
return (h);
}
