void	ft_rev_int_tab(int *tab, int size)
{
	int	indice;
	int	indice2;
	int	troca;

	indice = 0;
	indice2 = size - 1;
	while (indice < (size / 2))
	{
		troca = tab[indice];
		tab[indice] = tab[indice2];
		tab[indice2] = troca;
		indice++;
		indice2--;
	}
}
