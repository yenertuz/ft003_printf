#include "libft.h"

static void	putv_helper(int c, long value)
{
	if (c == 'b')
		{
			value = (unsigned char)(value);
			PN(value); NL;
		}
	if (c == 'n')
	{
		ft_putlong(value); NL;
	}
	if (c == 's')
	{
		PE((char*)(value));
	}
	if (c == 'c')
	{
		PC((char)(value)); NL;
	}
	if (c == 'u')
	{
		ft_putulong((unsigned long)value); NL;
	}
}

static char	*get_type(int c)
{
	if (c == 'b')
		return ("byte");
	if (c == 'n')
		return ("signed");
	if (c == 'u')
		return ("unsigned");
	if (c == 's')
		return ("string");
	if (c == 'c')
		return ("char");
	return ("");
}

void		ft_putv(int c, char *key, long value)
{
	char	*type;

	type = get_type(c);
	PS(key); PS(" ("); PS(type); PS("):\n");
	putv_helper(c, value);
}