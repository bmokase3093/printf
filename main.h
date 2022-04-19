#ifndef _PRINTF_H_
#define _PRINTF_H_

/* Libraries to be used */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct base- struct token
 *
 * @op: The identifier argument
 * @f: The base function
 */
typedef struct  base
{
	char *op;
	int (*f)(va_list p);
} base_t;

/* Funtion prototypes */
int _printf(const char *format, ...);
int selector(int *i, const char *format, va_list x);

/* Basic task Prototypes */
int op_char(va_list p);
int op_string(va_list p);
int op_percent(va_list __attribute__((unused)) p);
int op_numbers(va_list arg);

/* Other Prototypes */
int op_unsigned(va_list arg);
int op_octal(va_list p);
int op_binary(va_list p);
int print_rev(va_list p);
int rot13(va_list p);

/* Additional Prototypes */
int _putchar(char c);

#endif
