#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define SIZE 1024000 /* buffer size */

/**
 * struct sp - Struct sp
 *
 * @sp: The specifier
 * @f: The function associated
 */
typedef struct sp
{
	char sp;
	int (*f)(va_list, char *, int);
} sp_t;

int _printf(const char *format, ...);
int (*get_sp_func(char c))(va_list, char *, int);
int add_char(va_list ap, char *buffer, int i);
int add_str(va_list ap, char *buffer, int i);
int add_str_print(va_list ap, char *buffer, int i);
int copy_to_buff(char *s, char *buffer, int i);
int add_percent(va_list ap, char *buffer, int i);
char *int_to_str(unsigned long int num, int base);
