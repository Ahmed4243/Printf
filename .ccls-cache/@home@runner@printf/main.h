#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
void printf_str(char *s, int *pCount, int *pLen);
void printf_char(char c, int *pCount, int *pLen);
void printf_num(int n, int *pCount, int *pLen);
int size(const char *s);
int _putchar(char c);
int checker(char c1, char c2);

#endif /* MAIN_H */
