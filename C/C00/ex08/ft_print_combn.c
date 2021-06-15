#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcharpos(int n, int *comb, int pos)
{
	int	i;

	if (pos == 1)
	{
		write(1, ", ", 2);
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
}

void	ft_print_combn2(int n, int *comb)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (comb[i] == max)
	{
		--i;
		--max;
	}
	++comb[i];
	while (i < n)
	{
		comb[i + 1] = comb[i] + 1;
		++i;
	}
}

void	ft_print_combn(int n)
{
	int	comb[9];
	int	i;

	i = 0;
	while (i < n)
	{
		comb[i] = i;
		i++;
	}
	ft_putcharpos(n, comb, 0);
	while (comb[0] != 10 - n)
	{
		if (comb[n - 1] != 9)
		{
			++comb[n - 1];
		}
		else
		{
			ft_print_combn2(n, comb);
		}
		ft_putcharpos(n, comb, 1);
	}
}
