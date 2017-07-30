int		my_str_isalpha(char *str)
{
	

	
	while (str[0])
	{
		if ((str[0] >= 0 && str[0] <= 31) || (str[0] >= 33 && str[0] <= 64) 
				|| (str[0] >= 91 && str[0] <= 96) || str[0] >= 123)
			return 0;
		str++;
	}
	return 1;
}
