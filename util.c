#include <stdio.h>
#include "main.h"

void print_string(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str);
		print_string(str += 1);
	}
}

void print_int(int n)
{
	if (n > 9)
	{
		print_int(n / 10);
	}
	_putchar((n % 10) + '0');
}

void _binary(unsigned int n)
{
	if (n > 2)
	{
		_binary(n / 2);
	}
	_putchar((n % 2) + '0');
}
