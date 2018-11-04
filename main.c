#include "libft.h"

int	main(void)
{
	int	result;

	result = ft_printf("%#-##+3.5hd\n", -99999999);
	PN(result); NL;
	return (0);
}
