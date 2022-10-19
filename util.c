#include <stdio.h>
#include "main.h"

/**
 * print_int - Prints integer value to stdout
 * @n: The integer to print.
 * Return: Nothing.
 */
void print_int(int n)
{
	if (n > 9)
	{
		print_int(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 *  * print_string - Prints string to the stdout.
 *   * @str: The string to be printed.
 *    * Return: Number of string.
 *     */
int print_string(char *str)
{
	int i;

	if (str == NULL)
		str = "(nil)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i--);
}

/**
 * _binary - Print an unsigned int to
 * binary form to stdout
 * @n: The unsigned int to be converted
 * Return: Nothing
 */
void _binary(unsigned int n)
{
	if (n > 2)
	{
		_binary(n / 2);
	}
	_putchar((n % 2) + '0');
}
