#include "libft.h"

int	main(void)
{
	long 			number;
	unsigned long	u_number;
	char			*converted;

	number = -9223372036854775807 - 1;
	converted = ft_ltoi(number);
	PE(converted);
	free(converted);
	u_number = (unsigned long)(123456789123456789);
	converted = ft_utoi(u_number);
	PE(converted);
	free(converted);
	//ft_putv('s', "test", "zest", 'b', "test_byte", 'x', 'u', "test_long", -999999999999, 0);
	return (0);
}
