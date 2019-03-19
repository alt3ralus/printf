#include "holberton.h"
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	prnt_a print[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list arg;
	va_start(arg, format);
}
