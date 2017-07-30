int		ft_str_is_lowercase(char *str)
{
	while (str[0])
	{
		if ((str[0] >= 0 && str[0] <=96) || str[0] >=123)
			return 0;
		str++;
	}
	return 1;
}
