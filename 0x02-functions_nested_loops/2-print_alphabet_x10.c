#include "main.h"
/**
* print_alphabet_x10 - prints all alphabets in lowercase 10 times.
* Return: On success 1.
*/
void print_alphabet_x10(void)
{
	int i;
	char c;
for (i = 0; i < 10; i++)
	{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
	}
}
