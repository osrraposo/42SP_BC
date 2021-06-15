void	ft_sort_int_tab(int *tab, int size)
{
	int	indice;
	int	troca;

	indice = 0;
	while (indice < (size - 1))
	{
		if (tab[indice] > tab[indice + 1])
		{
			troca = tab[indice];
			tab[indice] = tab[indice + 1];
			tab[indice + 1] = troca;
			indice = 0;
		}
		else
			indice++;
	}
}
