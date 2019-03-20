#include "holberton.h"

/**
 * print_char - prints char
 *
 * @argumentos: parameter to print 
 */
int print_char(va_list argumentos)
{
	char pc = (char, va_arg(argumentos, int));
	_putchar(pc);
	return (1);
}

/**
 * print_string - prints string
 *
 * @argumentos: parameter to print
 */
int print_string(va_list argumentos)
{
	int iter;
	char *stng = va_arg(argumentos, int);

	if (!stng)
	{
		for (iter = 0 ; stng[iter] ; iter++)
			_putchar(stng[iter]);

		return (iter);
	}
	else
		stng = NULL;
}

/*void print_decimal(va_list argumentos)
{
  printf("%d", va_arg(argumentos, int));
  putchar('1');
}
void print_integer(va_list argumentos)
{
  printf("%i", va_arg(argumentos, int));
   putchar('1');
}*/
