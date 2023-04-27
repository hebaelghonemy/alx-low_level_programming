#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 t 14
* followed by a new line
* Return: 0
*/
void more_numbers(void)
{int k, i;
for (k = 0; k <= 10; k++)
for (i = 0; i <= 14; i++)
{_putchar(k);
_putchar(i);
}
_putchar('\n');
}
