#include "libft.h"

void	printf_get_specifier(char **format, t_printf *data)
{
	data->specifier = **format;
	(*format)++;
}