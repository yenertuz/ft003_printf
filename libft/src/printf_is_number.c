#include "libft.h"

int	printf_is_number(t_printf *data)
{
	char	specifier;

	specifier = data->specifier;
	if (ft_strchr("diuoxX", specifier) != 0)
	{
		return (1);
	}
	return (0);
}