#include "main.h"
/**
 * 1-isdigit - checks digits
 * @c: to be checked
 * Return: 1 for character thats digit else return 0
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}