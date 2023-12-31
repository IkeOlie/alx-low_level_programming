#include "main.h"
/**
 * _strcmp - compares pointers
 * @s1: fisrt string
 * @s2: second string
 * Return: difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
