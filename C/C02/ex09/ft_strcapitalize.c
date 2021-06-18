int	ft_a(char letter)
{
	if (letter >= '0' && letter <= '9')
		return (1);
	return ((letter >= 97 && letter <= 122)
		|| (letter >= 65 && letter <= 90));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	letter;

	i = 0;
	letter = 1;
	while (str[i] != '\0')
	{
		if (ft_a(str[i]))
		{
			if (letter && str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
			else if (!letter && str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
			letter = 0;
		}
		else
			letter = 1;
		i++;
	}
	return (str);
}
