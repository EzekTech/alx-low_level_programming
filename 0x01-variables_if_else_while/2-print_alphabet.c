#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	char alp;

	alp = 'a';

	while
		(alp <= 'z')
		{
			putchar(alp);
			alp++;
		}

	putchar('\n');
	return (0);
}
