#include "libft.h"

static void	putv_helper(int c, char *key, long value)
{
	if (c == 'b')
		{PS(key); PS(": "); PN((unsigned char)(value)); NL;}
	if (c == 'n')
		{PS(key); PS(": "); ft_putlong(value); NL;}
	if (c == 's')
		{PS(key); PE(": {"); PE((char*)(value)); PE("}");}
	if (c == 'c')
		{PS(key); PS(": "); PC((char)(value)); NL;}
	if (c == 'u')
		{PS(key); PS(": "); ft_putulong((unsigned long)value); NL;}
	
}

void		ft_putv(int c, ...)
{
	va_list		ap;
	int			c2;

	va_start(ap, c);
	if (c == 0)
	{ va_end(ap); return ;}
	else
		putv_helper(c, va_arg(ap, char*), va_arg(ap, long));
	while (1)
	{
		c2 = (va_arg(ap, int));
		if (c2 == 0)
		{
			va_end(ap);
			return ;
		}
		else
			putv_helper(c2, va_arg(ap, char*), va_arg(ap, long));
	}
}