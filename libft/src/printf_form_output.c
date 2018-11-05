#include "libft.h"

static char	*get_raw_output(char specifier, long input)
{
	if (specifier == 'd' || specifier == 'n')
		return (ft_ltoi((int)input));
	if (specifier == 's')
		return (ft_strdup((char*)(input)));
	if (specifier == 'u')
		return (ft_utoi((unsigned long)(input)));
	if (specifier == 'b')
		return (ft_ltoi((unsigned char)(input)));
	return ft_strdup("");
}

void		printf_form_output(t_printf *data, va_list ap)
{
	char	*output;
	long	input;

	input = va_arg(ap, long);
	input = printf_cast(data, input);
	output = get_raw_output(data->specifier, input);
	if (data->is_precision == 1)
		printf_apply_precision(&output, data);
	if (printf_is_number(&output, data) == 1)
		printf_apply_flags(&output, data);
	//printf_apply_width(&output, data);
	data->output = output;
	data->output_length = ft_strlen(output);
}