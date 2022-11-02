#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the number that has a power of y
 * @y: the power of x
 * Return: result and return -1 if y is less than 0
*/
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	result = _pow_recursion(x, y);
	return (result);
}
