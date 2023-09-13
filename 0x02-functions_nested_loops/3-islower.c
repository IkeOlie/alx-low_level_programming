#include "main.h"
/**
 * _islower - outputs lowercase characters
 * @c: character in check
 * Return: 1 for _islower or 0 for others
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
