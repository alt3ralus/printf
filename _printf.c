#include "holberton.h"

/**
 *
 *
 */


int _printf(const char *format, ...)
{
	estructura_t pArray[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_integer}
		{NULL, NULL}
	};

	int x = 0;
	int y = 0;

	va_list argumentos;

	va_start(argumentos, format);

	while (format[y] != '\0')
	{
		x = 0;

		while (pArray[x].cadena != NULL)
		{
			if (format[y] == pArray[x].cadena[0])
			{
				_printf("formato: %s\n", format);

				pArray[x].pointF(argumentos);
			}
			x++;
		}
		y++;
	}
	return (0);
}
