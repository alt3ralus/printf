#ifndef holberton
#define holberton

typedef struct funy {
	char * cadena;
	void (pointF) (va_list argumentos);

} funny_a;

int _printf(const char *format, ...);
int _putchar(char c);
#endif
