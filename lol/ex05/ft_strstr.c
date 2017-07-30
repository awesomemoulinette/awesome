char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (to_find[0] == '\0')
		return 0;
	while (str[i])
	{
		j = i;
		k = 0;
		while (str[j] == to_find[k])
		{
			j++;
			k++;
			if (to_find[k] == '\0')
				return &str[i];
		}
		i++;
	}
	return 0;
}
