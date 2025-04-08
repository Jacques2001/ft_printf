#include "ft_printf.h"

int print_Hexa(unsigned int nb)
{
	char tab[] = "0123456789ABCDEF";
	int count;

	count = 0;
  if (nb >= 16)
      count += print_Hexa(nb / 16);
  write(1, &tab[nb % 16], 1);
  count++;
  return count;
}