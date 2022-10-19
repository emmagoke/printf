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
	void (*print)(va_list);
};
typedef struct format format_t;
int _putchar(char c);

void print_s(va_list);
void print_c(va_list);
void print_string(char *);
int _printf(const char *format, ...);
void print_int(int);
void print_d_i(va_list);
void _binary(unsigned int);
void print_b(va_list);
void print_per(va_list);

#endif
