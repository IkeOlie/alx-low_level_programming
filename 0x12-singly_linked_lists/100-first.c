#include <stdio.h>

/**
 * first - ere main function execution
 * Return: no return.
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
