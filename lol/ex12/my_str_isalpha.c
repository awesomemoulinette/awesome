int		my_str_isnumeric(char *str)
{	
	while (str[0])
	{
		if ((str[0] >= 0 && str[0] <= 31) || (str[0] >= 33 && str[0] <= 47) 
				|| str[0] >= 58)
			return 0;
		str++;
	}
	return 1;
}
