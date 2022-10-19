#include "main.h"

/**
 * check - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @type: A list of all the possible functions.
 * @arg: A list containing all the arguments passed to the program.
 * Return: A total count of the characters printed.
 */
int check(const char *format, format_t type[], va_list arg)
{
	int i, j, len = 0, l = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; type[j].id != NULL; j++)
			{
				if (format[i + 1] == type[j].id[0])
				{
					l = type[j].print(arg);
					len += l;
					break;
				}
			}
			if (type[j].id == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					len += 2;

				}
				else
				{
					return (-1);
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			len += 1;
		}
	}
	return (len);
}
