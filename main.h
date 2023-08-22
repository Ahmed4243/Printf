#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printf_str(char *s);
void printf_char(char c, int *pCount, int *pLen);
int size(const char *s);
int _putchar(char c);

#endif /* MAIN_H */
