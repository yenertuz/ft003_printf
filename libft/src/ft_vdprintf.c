#include "libft.h"

int	ft_vdprintf(int fd, char const *format, va_list ap)
{
	int 		result;
	char const	*start;

	result = 0;
	start = format;
	while (*format)
	{
		if (*format == '%')
		{
			result += vdprintf_helper(&format, ap, fd);
		}
		else
		{
			start = format;
			while (*format && *format != '%')
		}
	}
	return (result);
}