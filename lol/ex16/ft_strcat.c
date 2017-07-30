int		my_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return i; 
}

char	*ft_strcat(char *dst, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = my_strlen(dst);
	while (src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst;
}
