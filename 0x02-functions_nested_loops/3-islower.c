#include "main.h"
/**
 * _islower - outputs lowercase characters
 * return: 1 for lower, 0 for others
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
