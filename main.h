#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list arg);
void _test(char c, va_list arg, int *ptr);
void print_integer(int num, int *length);


#endif
