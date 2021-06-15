/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantos- <tsantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 02:50:31 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/06/10 18:51:33 by tsantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	int	n;

	n = 2;
	while (n <= 5)
	{
		printf("n = %d:\n", n);
		ft_print_combn(n++);
		write(1, "\n", 1);
	}
	n = 9;
	printf("n = %d:\n", n);
	ft_print_combn(n++);
	write(1, "\n", 1);
	return (0);
}
