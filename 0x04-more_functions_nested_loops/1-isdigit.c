#include "main.h"

/**
* _isdigit - write a function that check for a digit (0 through 9).
* @c: char to check
* Return:  0 for non-digit or 1 for digit
**/
int _isdigit(int c)
{
	if (c >= 48 && c < 57)
		return (1);
	else
		return (0);
}
