int		ft_str_is_numeric(char *str)
{	
	while (str[0])
	{
		if ((str[0] >= 0 && str[0] <= 31) || (str[0] >= 33 && str[0] <= 47) 
				|| (str[0] >= 58 && str[0] >= 123))
			return 0;
		str++;
	}
	return 1;
}
