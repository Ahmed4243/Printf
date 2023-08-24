#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
void printf_str(char *s, int *pCount, int *pLen, char buffer[], int *index);
void printf_char(char c, int *pCount, int *pLen, char buffer[], int *index);
void printf_num(int n, int *pCount, int *pLen, char buffer[], int *index);
int size(const char *s);
void _putchar(char c, char buffer[], int *index);
#define BUFF_SIZE 1024
int checker(char c1, char c2);

#endif /* MAIN_H */
