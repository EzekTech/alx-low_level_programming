#include <stdio.h>

/**
 *main - Entry Point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	char alp;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	for (alp = 'a'; alp < 'g'; alp++)
	{
		putchar(alp);
	}

	putchar('\n');
	return (0);
}
