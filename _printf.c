#include "main.h"

format_t type[] = {
	{"c", print_c},
	{"s", print_s},
	{"d", print_d_i},
	{"i", print_d_i},
	{"%", print_per},
	{"b", print_b},
	{NULL, NULL}
};

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
	unsigned int i, j, f;

	va_start(args, format);
	i = 0;
	while (*(format + i) && format)
	{
		if (format[i] == '%')
		{
			j = 0, f = 0;
			while (*(type[j].id))
			{
				if (format[i + 1] == *(type[j].id))
				{
					type[j].print(args);
					f = 1;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}

		if (f == 1)
		{
			f = 0;
			i++;
		}
		i++;
	}
	return (i++);
}
