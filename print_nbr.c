#include "ft_printf.h"

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int print_nbr(int nb)
{
	int count;

	count = 0;
  if (nb < 0)
  {
      ft_putchar('-');
      count++;
      nb = -nb;
  }
  if (nb >= 10)
  {
      count += print_nbr(nb / 10);
      count += print_nbr(nb % 10);
  }
  else
  {
    ft_putchar(nb + '0');
    count++;
  }
  return count;
}
