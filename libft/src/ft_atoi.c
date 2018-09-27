#include "libft.h"

int	ft_atoi(char const *s)
{
	int	sign;
	int	number;

	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	number = 0;
	sign = 1;
	if (*s == '-')
	{
		sign = -1;
		s++; 
	}
	else if (*s == '+')
		s++;
	while ('0' <= *s && *s <= '9')
	{
		number *= 10;
		number += (sign) * (*s - '0');
		s++;
	}
	return (number);
}