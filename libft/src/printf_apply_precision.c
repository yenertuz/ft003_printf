#include "libft.h"

static void			apply_precision_to_string(char **output, t_printf *data)
{
	unsigned int	precision;
	char			*new;

	precision = data->precision;
	new = 0;
	if (precision < (unsigned int)(data->output_length))
	{
		new = ft_strnew(precision);
		ft_memcpy(new, *output, precision);
		ft_strre(output, new);
	}
}

static void			get_number_and_add_zeroes(char **output, unsigned int zeroes_to_add, unsigned int precision)
{
	char	*new;
	char	*old;

	old = *output;
	new = ft_strnew(precision);
	ft_memset(new, '0', zeroes_to_add);
	if (*old == '-')
		old++;
	ft_memcpy(new + zeroes_to_add, old, precision - zeroes_to_add);
	ft_strre(output, new);
}

static unsigned int	count_digits(char *str)
{
	unsigned int	digit_count;

	if (*str == '-')
		str++;
	digit_count = 0;
	while (ft_isdigit(str[digit_count]))
	{
		digit_count++;
	}
	return (digit_count);
}

static void	apply_precision_to_number(char **output, t_printf *data)
{
	unsigned int	digit_count;
	char			*new;
	int				is_negative;

	digit_count = count_digits(*output);
	is_negative = 0;
	if (digit_count >= data->precision && **output != '0')
		return ;
	if (**output == '0' && data->precision == 0)
	{
		ft_strre(output, ft_strdup(""));
		return ;
	}
	if (**output == '-')
		is_negative = 1;
	get_number_and_add_zeroes(output, data->precision - digit_count, data->precision);
	if (is_negative ==  1)
	{
		new = ft_strjoin("-", *output);
		ft_strre(output, new);
	}
}

void		printf_apply_precision(char **output, t_printf *data)
{
	if (printf_is_number(data) == 1)
	{
		apply_precision_to_number(output, data);
	}
	else if (data->specifier == 's')
	{
		apply_precision_to_string(output, data);
	}
}