#include <stdio.h>
/**
 * main - entry point
 * Return: always 0(success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu bytes\n", sizeof(a));
	printf("Size of an int: %lu bytes\n", sizeof(b));
	printf("Size of a long int: %lu bytes\n", sizeof(c));
	printf("Size of a long long int: %lu bytes\n", sizeof(d));
	printf("Size of a float: %lu bytes\n", sizeof(e));
	return (0);
}
