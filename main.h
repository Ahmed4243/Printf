#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
void printf_char(char c, int *pCount, int *plen);
void printf_string(char *str, int *pCount, int *plen);
int _strlen(const char *s);
int _putchar(char c);

#endif
