#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char str)
{
	if (str < 32 || str > 127)
	{
		return (0);
	}
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex;
	unsigned char	current;

	hex = "0123456789abcdef";
	i = 0;
	while (1)
	{
		current = str[i];
		if (current == '\0')
			break ;
		if (ft_str_is_printable(current))
		{
			ft_putchar(current);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[current / 16]);
			ft_putchar(hex[current % 16]);
		}
		i++;
	}
}
