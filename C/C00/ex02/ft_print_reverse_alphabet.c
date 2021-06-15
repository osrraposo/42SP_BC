#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfarev;

	alfarev = 'z';
	while (alfarev >= 'a')
	{
		write (1, &alfarev, 1);
		alfarev--;
	}
}
