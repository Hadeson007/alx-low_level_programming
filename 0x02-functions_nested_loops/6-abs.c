#include "main.h"
#include <stdio.h>
/**
 * _abs - computes absolute value of an integer
 * @x:  is the int that will use for the argument of the function
 * Return: 0
 */

int _abs(int x)
{
	if (x > 0 || x == 0)
	{
	return (x);
	}
	else
	return (x * -1);
}
