#include "libft.h"

void	printf_apply_flags(char **output, t_printf *data)
{
	if (printf_is_signed(data) == 1 && **output != '-')
	{
		if (ft_strchr(data->flags, '+') != 0)
		{
			ft_prepend(output, "+");
			return ;
		}
		if (ft_strchr(data->flags, " ") != 0)
			ft_prepend(output, " ");
	}
	if (printf_is_unsigned(data) == 1 && ft_strchr(data->flags, "#") != 0 &&
		is_zero(*output) == 0)
	{
		if (data->specifier == 'o')
			ft_prepend(output, "0");
		else if (data->specifier == "x")
			ft_prepend(output, "0x");
		else if (data->specifier == "X")
			ft_prepend(output, "0X");
	}
}