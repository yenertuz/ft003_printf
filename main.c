#include "libft.h"

int	main(void)
{
	long 	number;
	char	*converted;

	number = -9223372036854775807 - 1;
	converted = ft_ltoi(number);
	PE(converted);
	//ft_putv('s', "test", "zest", 'b', "test_byte", 'x', 'u', "test_long", -999999999999, 0);
	return (0);
}
