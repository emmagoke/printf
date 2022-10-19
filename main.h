#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct format - This struct has to data type
 * a char pointer and a function pointer.
 * @id: A pointer that stores the indentifier.
 * @print: The function to called.
 */
struct format
{
	char *id;
	int (*print)(va_list);
};
typedef struct format format_t;
int _putchar(char c);
int check(const char *format, format_t type[], va_list arg);
int print_s(va_list);
int print_c(va_list);
int print_string(char *);
int _printf(const char *format, ...);
void print_int(int);
int print_d_i(va_list);
void _binary(unsigned int);
int print_b(va_list);
int print_per(va_list);

#endif
