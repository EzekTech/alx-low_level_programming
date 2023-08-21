#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character to stdout
 * @c: the character to print
 * Return: on success 1
 * On error,-1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
