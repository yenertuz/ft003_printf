#include "libft.h"

void	ft_strre(char **output, char *new)
{
	free(*output);
	*output = new;
}