#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabets lower followed by upper
 * Return: always 0(success)
 */

int main(void)

{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
putchar('\n');

return (0);
}

