#include "libft.h"


static void	print_data(t_printf *data)
{
	PV('s', "flags", data->flags);
	PV('u', "width", data->width);
	PV('u', "precision", data->precision);
	PV('s', "length", data->length);
	PV('c', "specifier", data->specifier);
}

static int	vdprintf_helper(char **format, va_list ap, int fd,
								t_printf *data)
{
	int	result;

	ap += 0; fd += 0; // remove this line;
	ft_bzero(data, sizeof(t_printf));
	(*format)++;
	printf_get_flags(format, data);
	printf_get_width(format, data);
	printf_get_precision(format, data);
	printf_get_length(format, data);
	printf_get_specifier(format, data);
	print_data(data);
	printf_form_output(data, ap);
	write(fd, data->output, data->output_length);
	result = (int)(data->output_length);
	free(data->output);
	return ((int)(result));
}

int			ft_vdprintf(int fd, char *format, va_list ap)
{
	int 		result;
	int			difference;
	char const	*start;
	t_printf	*data;

	fd += 0; // remove this line;
	result = 0;
	start = format;
	data = MEMALLOC(t_printf, 1);
	while (*format)
	{
		if (*format == '%')
		{
			result += vdprintf_helper(&format, ap, fd, data);
		}
		else
		{
			start = format;
			while (*format && *format != '%')
			{
				format++;
			}
			difference = format - start;
			write(fd, start, difference);
			result += difference;
		}
	}
	free(data);
	return (result);
}