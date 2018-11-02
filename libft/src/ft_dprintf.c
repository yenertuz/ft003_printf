#include "libft.h"

int	ft_dprintf(int fd, char const *format, ...)
{
	int		result;
	va_list	ap;

	if (format == 0)
		return (-1);
	va_start(ap, format);
	result = ft_vdprintf(fd, format, ap);
	va_end(ap);
	return (result);
}