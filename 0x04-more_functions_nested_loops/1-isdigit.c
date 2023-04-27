#include "main.h"

/**
* _isdigit - function that check for digit character
* @c: the character in ASCII table
* Return:1 for  digit. 0  for otherwise
*/
int _isdigit(int c)
{

if (c >= 48 && c <= 57)

	return (1);
else
	return (0);
}
