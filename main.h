#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_str(char *str);
void _test(char c, va_list arg, int *ptr);
void print_int(int num, int *length);


#endif
