int		my_str_islowercase(char *str)
{
	while (str[0])
	{
		if (str[0] >= 65 && str[0] <= 90)
			return 0;
		str++;
	}
	return 1;
}
