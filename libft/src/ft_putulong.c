#include "libft.h"

static void	putulong_helper(unsigned long number)
{
	unsigned long	result;

	if (number == 0)
		return ;
	result = number % 10;
	putulong_helper(number / 10);
	ft_putchar('0' + result);
}

void		ft_putulong(unsigned long number)
{
	if (number == 0)
	{
		write(1, "0", 1);
		return ;
	}
	putulong_helper(number);
}