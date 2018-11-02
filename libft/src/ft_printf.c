#include "libft.h"

int	ft_printf(char const *format, ...)
{
	va_list	ap;
	int		result;

	if (format == 0)
		return (-1);
	va_start(ap, format);
	result = ft_vdprintf(1, format, ap);
	va_end(ap);
	return (result);
}