int		my_str_isuppercase(char *str)
{
	while (str[0])
	{
		if (str[0] >= 97 && str[0] <= 122)
			return 0;
		str++;
	}
	return 1;
}
