#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int n,m;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	m = n % 10;

	/* your code goes there */
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else
		printf("Last digit of %d is %d and is 0", n, m);
	return (0);
}
