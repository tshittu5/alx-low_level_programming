#include <stdio.h>
#include "main.h"

/**
* _putchar - writes char c to stdout
* @c: char for print
*
* Return: 1 on success
* On error: -1and errno is accordingly set
**/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
