int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	res;

	if (size == 0)
		return (ft_strlen(src));
	res = 0;
	while (size > 1 && *src)
	{
		*dest = *src;
		++dest;
		++src;
		--size;
		++res;
	}
	*dest = '\0';
	while (*dest || *src)
	{
		if (*src)
		{
			++src;
			++res;
		}
	}
	return (res);
}
