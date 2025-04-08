#include "ft_printf.h"

int print_hex_for_adress(unsigned long nb)
{
	char tab[] = "0123456789abcdef";
	int count;

	count = 0;
  if (nb >= 16)
      count += print_hex_for_adress(nb / 16);
  write(1, &tab[nb % 16], 1);
  count++;
  return count;
}

int print_adress(void *ptr)
{
	unsigned long nbr;

	nbr = (unsigned long)ptr;
	write(1, "0x", 2);
	return(print_hex_for_adress(nbr) + 2);
}