#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	i = 0;
	va_start(args, format);
	count = 0;
	while(format[i])
	{
		if(format[i] == '%')
			count += handle_format(format, args, &i);
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return count;
}

// int main()
// {
// 	// char str[] = "Hello";
// 	// int x = -42;
// 	// ft_printf("%c %s %p %d %i %u %x %X %%\n", 'c', str, &x, x, x, x, x, x);
// 	// printf("%c %s %p %d %i %u %x %X %%\n", 'c', str, &x, x, x, x, x, x);
// 	ft_printf(" NULL %s NULL ", NULL);
// 	return 0;
// }