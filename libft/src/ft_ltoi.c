#include "libft.h"

char	*ft_ltoi(long number)
{
	char	buffer[23];
	long	counter;
	long	div_remainder;
	int		is_negative;

	if (number == 0)
		return (ft_strdup("0"));
	ft_memset(buffer, ' ', 22);
	buffer[22] = 0;
	counter = 1;
	is_negative = 0;
	if (number < 0)
		is_negative = 1;
	while (number != 0)
	{
		div_remainder = number % 10;
		if (div_remainder < 0)
			div_remainder *= -1;
		buffer[22 - counter] = '0' + div_remainder;
		number /= 10;
		counter++;
	}
	if (is_negative == 1)
		buffer[22 - counter] = '-';
	return (ft_strtrim(buffer));
}