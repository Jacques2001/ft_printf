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

int main()
{
	ft_printf("%s %s %s %u\n", "Jacques", "est", "super", -1);
	return 0;
}