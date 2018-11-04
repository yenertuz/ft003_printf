#include "libft.h"

void	printf_get_length(char **format, t_printf *data)
{
	if (**format == 'l' || **format == 'h' || **format == 'z')
	{
		(data->length)[0] = **format;
		(*format)++;
	}
	if (**format == 'l' || **format == 'h' || **format == 'z')
	{
		(data->length)[1] = **format;
		(*format)++;
	}
}