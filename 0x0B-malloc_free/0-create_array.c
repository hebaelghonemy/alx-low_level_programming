#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array -  a function that creates an array of char.
 * @c: a specific char
 * @size: the size of the memory to print
 * Return NULL if size = 0
 * Return h.
 */

char *create_array(unsigned int size, char c)
{
	char *h = (char *)malloc(size * sizeof(h));
		if (size == 0)
		{
			return (NULL);
		}
		for (int i = 0; i < size; i++)
		{
			h[i] = i + 1;

		}

	return (h);
}
