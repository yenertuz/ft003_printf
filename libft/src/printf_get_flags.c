#include "libft.h"

void	printf_get_flags(char **format, t_printf *data)
{
	unsigned int	flag_counter;

	flag_counter = 0;
	while (**format)
	{
		if (**format == '#' || **format == '0' || **format == '-' ||
			**format == '+' || **format == ' ')
		{
			if (ft_strchr(data->flags, **format) == 0)
			{
				(data->flags)[flag_counter] = **format;
				flag_counter++;
			}
			(*format)++;
		}
		else
		{
			return ;
		}
	}
}