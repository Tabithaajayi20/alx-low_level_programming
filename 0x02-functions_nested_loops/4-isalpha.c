#include "main.h"

/**
 * _isalpha - to check if char is lower case or uppercase
 * @c:is char to be checked
 * Return: 1 if char is lowercase or uppercase, otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
