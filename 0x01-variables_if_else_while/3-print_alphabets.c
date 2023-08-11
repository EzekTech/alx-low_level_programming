#include <stdio.h>

/**
*main - Entry Point
*Return: Always 0 (Success)
*/

int main(void)
{
	char alp, alps;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (alps = 'A'; alps <= 'Z'; alps++)
	{
		putchar(alps);
	}
	putchar('\n');
	return (0);
}
