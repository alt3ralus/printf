#include "holberton.h"
/**
 * _printf - A function
 * @format: array of char = String.
 * Return: Len of string.
 */
int _printf(const char *format, ...)
{
	estructura_t pArray[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	int x, y, count = 0;

	va_list argumentos;

	va_start(argumentos, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			_putchar(format[x]);
			count = count + 1;
		}
		else if (format[x] == '%' && format[x + 1] == '%')
		{
			_putchar(format[x]);
			x++;
			count = count + 1;
		}
		else if (format[x] == '%')
		{
			for (y = 0; pArray[y].cadena != NULL; y++)
			{
				if (format[x + 1] == pArray[y].cadena[0])
				{
					count = count + pArray[y].pointF(argumentos);
					x++;
				}
			}
		}
	}
	va_end(argumentos);
	return (count);
}
