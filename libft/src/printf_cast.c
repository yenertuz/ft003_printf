#include "libft.h"

long	printf_cast(t_printf *data, long number)
{
	char	specifier;
	char	*length;

	length = data->length;
	specifier = data->specifier;

	if (specifier == 'c')
		number = (int)(number);
	if (ft_strlen(length) == 0 && ft_strchr("diuoxX", specifier) != 0)
		number = (int)(number);
	else if (ft_strequ(length, "hh") == 1 && ft_strchr("diuoxX", specifier) != 0)
		number = (char)(number);
	else if (ft_strequ(length, "h") == 1 && ft_strchr("diuoxX", specifier) != 0)
		number = (short)(number);
	return (number);
}