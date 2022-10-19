#include "main.h"
#include <unistd.h>

/**
 * print_c - Handles character values.
 * @arg: This is va_list type
 * Return: The number of character printed.
 */
int print_c(va_list arg)
{
	int c = va_arg(arg, int);

	_putchar(c);
	return (1);
}

/**
 * print_s - Handle string values.
 * @arg: This is va_list type
 * Return: Number of character printed
 */
int print_s(va_list arg)
{
	char *s = va_arg(arg, char *);
	int n;

	n = print_string(s);
	return (n);
}

/**
 * print_d_i - Handles integer values.
 * @arg: This is va_list type
 * Return: Nothing.
 */
int print_d_i(va_list arg)
{
	int num = va_arg(arg, int);

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	print_int(num);
	return (1);
}

/**
 * print_per - Prints % value
 * @arg: This is va_list type
 * Return: NUmber of character printed.
 */
int print_per(va_list arg)
{
	int c = va_arg(arg, int);

	c = '%';
	_putchar(c);
	return (1);
}

/**
 * print_b - Converts unsigned int to binary value.
 * @arg: This is va_list type
 * Return: Number of integer converted
 */
int print_b(va_list arg)
{
	unsigned int n = va_arg(arg, int);

	_binary(n);
	return (1);
}
