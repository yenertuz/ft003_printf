#include "libft.h"

int	main(void)
{
	int	result;

	result = ft_printf("%b", -2);
	PN(result); NL;
	return (0);
}
