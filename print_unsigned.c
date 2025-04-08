#include "ft_printf.h"

int print_unsigned(unsigned int nb)
{
	int count;

	count = 0;
  if (nb >= 10)
  {
      count += print_unsigned(nb / 10);
      count += print_unsigned(nb % 10);
  }
  else
  {
    write(1, &"0123456789"[nb], 1);
    count++;
  }
  return count;
}