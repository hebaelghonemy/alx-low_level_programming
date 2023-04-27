#include "main.h"
#include <stdio.h>
/**
* main - check the code.
*Description: Write a function that checks for uppercase character.
* Return: Always 0.
*/
int main(void)
{
	char ch1 = 'c';

if (_isupper(ch1))
	{
	printf("%c is an Uppercase Letter \n", (ch1));
	return (1); }

else
	{
	printf("%c is not an Uppercase Letter \n", (ch1));
	return (0); }
}
