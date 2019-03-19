#ifndef HOLBERTON_H_
#define HOLBERTON_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


int _printf(char *format, ...);
int _putchar(char c);
void print_char(va_list arg);
void print_string(va_list arg);


typedef struct prnt
{
	char *a;
	void (*f)(va_list arg);
} prnt_n;
#endif
