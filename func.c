#include "main.h"
#include <unistd.h>

void print_c(va_list arg)
{
	int c = va_arg(arg, int);

	_putchar(c);
}

void print_s(va_list arg)
{
	char *s = va_arg(arg, char *);

	print_string(s);
}
void print_d_i(va_list arg)
{
	int num = va_arg(arg, int);

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	print_int(num);
}
void print_per(va_list arg)
{
	int c = va_arg(arg, int);

	c = '%';
	_putchar(c);
}

void print_b(va_list arg)
{
	unsigned int n = va_arg(arg, int);

	_binary(n);
}
