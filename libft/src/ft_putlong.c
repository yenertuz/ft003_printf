#include "libft.h"

static void	putlong_helper(long number)
{
	long	result;

	if (number == 0)
		return ;
	result = number % 10;
	if (result < 0)
		result *= -1;
	putlong_helper(number / 10);
	ft_putchar('0' + result);
}

void		ft_putlong(long number)
{
	if (number == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (number < 0)
		write(1, "-", 1);
	putlong_helper(number);
}