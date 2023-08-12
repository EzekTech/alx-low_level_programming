#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (a = 0; a <= 9; a++)
			{
				if (!(c == b || c == a || b == a || c > b || b > a))
				{
					putchar(c + '0');
					putchar(b + '0');
					putchar(a + '0');
					if (!(c == 7 && b == 8 && a == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
