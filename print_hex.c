#include "ft_printf.h"

int print_hex(unsigned int nb)
{
	char tab[] = "0123456789abcdef";
	int count;

	count = 0;
  if (nb >= 16)
      count += print_hex(nb / 16);
  write(1, &tab[nb % 16], 1);
  count++;
  return count;
}