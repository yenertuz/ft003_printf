#include "libft.h"

void	printf_get_width(char **format, t_printf *data)
{
	unsigned int	width;

	width = 0;
	while (**format)
	{
		if ('0' <= **format && **format <= '9')
		{
			width *= 10;
			width += **format - '0';
			(*format)++;
		}
		else
		{
			data->width = width;
			return ;
		}
	}
}