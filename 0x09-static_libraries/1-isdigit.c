#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * Return: 1 if digit, elso 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
