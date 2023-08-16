#include "main.h"

/**
 *print_sign - prints the sign of a number
 * @alp: check
 * Return: 1 and prints + if alp is greater than zero
 * 0 and prints 0 if alp is zero
 * -1 and prints - if alp is less than zero
 */

int print_sign(int alp)
{
	if (alp > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (alp == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (alp < 0)
	{
		_putchar('-');
	}
	return (-1);
}


