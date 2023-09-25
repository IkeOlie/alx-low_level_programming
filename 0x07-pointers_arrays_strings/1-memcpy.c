#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where copied memory is stored
 * @src: memory to be copied
 * @n: no of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		dest[a] = src[a];
		n--;
	}

	return (dest);
}
