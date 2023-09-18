#include <unistd.h>
/**
 * _putchar - wtites the character c
 * Return: ob success 1 on error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
