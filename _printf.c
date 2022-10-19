#include "main.h"

/**
 * _printf - This function acts like printf in the c standard
 * library. It handles some flag like (c, s, d,..)
 * @format: The Input into the function.
 *
 * Return: The Length of the format.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len;
	format_t type[] = {
		{"%", print_per},
		{"c", print_c},
		{"s", print_s},
		{"d", print_d_i},
		{"i", print_d_i},
		{"b", print_b}, 
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(args, format);
	len = check(format, type, args);
	va_end(args);
	return (len);

}
