#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int handle_format(const char *format, va_list args, int *i);
int print_char(char c);
int print_string(char *str);
int print_nbr(int nb);
int print_hex(unsigned int hex);
int print_Hexa(unsigned int nb);
int print_address(void *ptr);
int print_unsigned(unsigned int nb);

#endif