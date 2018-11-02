#include "libft.h"

char	*ft_utoi(unsigned long number)
{
	char			buffer[21];
	unsigned long	div_remainder;
	int				counter;

	if (number == 0)
		return (ft_strdup("0"));
	ft_memset(buffer, ' ', 20);
	buffer[20] = 0;
	counter = 1;
	while (number != 0)
	{
		div_remainder = number % 10;
		buffer[20 - counter] = '0' + div_remainder;
		number /= 10;
		counter++;
	}
	return (ft_strtrim(buffer));
}