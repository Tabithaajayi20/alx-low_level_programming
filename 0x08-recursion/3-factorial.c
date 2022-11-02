#include "main.h"
/**
 * factorial - factorial of a number
 * @n: the given number
 * Return: -1 if n<0 and return 1 as the factorial of 0
*/
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result = n * factorial(n - 1);
	return (result);
}
