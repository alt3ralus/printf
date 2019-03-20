#include "holberton.h"

/**
 * print_char - prints char
 *
 * @argumentos: parameter to print
 * Return: 1
 */
int print_char(va_list argumentos)
{
	char pc = va_arg(argumentos, int);

	_putchar(pc);
	return (1);
}

/**
 * print_string - prints string
 *
 * @argumentos: parameter to print
 * Return: length of string
 */
int print_string(va_list argumentos)
{
	int iter;
	char *stng = va_arg(argumentos, int);

	if (stng == NULL)
		stng = NULL;

	for (iter = 0 ; stng[iter] ; iter++)
		_putchar(stng[iter]);

	return (iter);
}

/*void print_decimal(va_list argumentos)*/
/*void print_integer(va_list argumentos)*/
