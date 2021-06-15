#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alfa;

	alfa = 'a';
	while (alfa <= 'z')
	{
		write (1, &alfa, 1);
		alfa++;
	}
}
