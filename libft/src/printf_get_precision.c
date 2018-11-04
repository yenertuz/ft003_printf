#include "libft.h"

void	printf_get_precision(char **format, t_printf *data)
{
	unsigned int	precision;

	if (**format != '.')
		return ;
	data->is_precision = 1;
	precision = 0;
	(*format)++;
	while (**format)
	{
		if ('0' <= **format && **format <= '9')
		{
			precision *= 10;
			precision += **format - '0';
			(*format)++;
		}
		else
		{
			data->precision = precision;
			return ;
		}
	}
}