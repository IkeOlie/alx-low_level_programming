#include "main.h"
/**
 * _isdigit - checks digits that are characters
 * @c: to be checked
 * Return: 1 for character thats digit otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
