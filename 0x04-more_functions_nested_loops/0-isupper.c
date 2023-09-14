#include "main.h"
/**
 * _isupper -  checks upper cases
 * @c: number to be checked
 * Return: 1 for upper, 0 for others
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
