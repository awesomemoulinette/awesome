#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define CYN "\x1B[36m"
#define RESET "\x1B[0m"

void	ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*my_strupcase(char *str);
char	*ft_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*ft_strlowcase(char *str);
char	*my_strcapitalize(char *str);
char	*ft_strcapitalize(char *str);
int		my_str_isalpha(char *str);
int		ft_str_is_alpha(char *str);
int		my_str_isnumeric(char *str);
int		ft_str_is_numeric(char *str);
int		my_str_islowercase(char *str);
int		ft_str_is_lowercase(char *str);
int		my_str_isuppercase(char *str);
int		ft_str_is_uppercase(char *str);
int		my_str_isprintable(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dst, char *src);

int		main(int ac, char *av[])
{
	if (atoi(av[1]) == 0)
	{
		printf(BLU "\t -| 'EX00' FT_PUTSTR |-\n\n" RESET);
		char str[] = "Welcome at 101, enjoy the first pool :)";

		if (ac > 2)
		{
			printf(" -- printf --: \n%s\n\n", av[2]);
			printf("-- ft_putstr --\n");
			ft_putstr(av[2]);
		}
		else
		{
			printf(" -- printf --: \n%s\n\n", str);
			printf("-- ft_putstr --\n");
			ft_putstr(str);
		}
	}

	if (atoi(av[1]) == 1)
	{
		printf(BLU "\t -| 'EX01' FT_PUTNBR |-\n\n" RESET);
		int nb = 101;

		if (ac > 2)
		{
			printf(" -- printf --: \n%d\n\n", atoi(av[2]));
			printf("-- ft_putnbr --\n");
			ft_putnbr(atoi(av[2]));
		}
		else
		{
			printf(" -- printf --: \n%d\n\n", nb);
			printf("-- ft_putnbr --\n");
			ft_putnbr(nb);
		}
	}

	if (atoi(av[1]) == 2)
	{
		printf(BLU "\t-| 'EX02' FT_ATOI |-\n" RESET);
		char str1[] = "ABC 123  "; 
		char str2[] = "123 VIM"; 
		char str3[] = "-123 zsh"; 
		if (ac > 2)
		{
			printf("\n -- ft_atoi --\n%d\n", ft_atoi(av[2]));
			printf("\n -- atoi --\n%d\n", atoi(av[2]));
		}
		else
		{
			printf("\nValues Tested:\n\n\"%s\"||\"%s\"||\"%s\"\n", str1, str2, str3);
			printf("\n -- ft_atoi --\n   %d\t\t %d\t\t%d\n", ft_atoi(str1),  ft_atoi(str2),  ft_atoi(str3));
			printf("\n -- atoi --\n   %d\t\t %d\t\t%d\n", atoi(str1), atoi(str2), atoi(str3));
		}
	}

	if (atoi(av[1]) == 3)
	{
		printf(BLU "\t -| 'EX03' FT_STRCPY |-\n\n" RESET);
		char src[] = "Hello I want copy this string";
		char dest[30];

		if (ac > 2)
		{
			printf(" -- strcpy --: \n%s\n\n", strcpy(dest, av[2]));
			printf("-- ft_strcpy --\n");
			printf("%s", ft_strcpy(av[2], av[2]));
		}
		else
		{
			printf(" -- strcpy --: \n%s\n\n", strcpy(dest, src));
			printf("-- ft_strcpy --\n");
			printf("%s", ft_strcpy(dest, src));
		}
	}

	if (atoi(av[1]) == 4)
	{
		printf(BLU "\t -| 'EX04' FT_STRNCPY |-\n\n" RESET);
		char src[] = "Hello I want copy 10 characters in this string";
		char dest[30];
		int nb = 10;

		if (ac > 2)
		{
			printf(BLU " -- strncpy --: \n%s\n\n" RESET , strncpy(dest, av[2], atoi(av[3])));
			printf("-- ft_strncpy --\n");
			printf("%s", ft_strncpy(av[2], av[2], atoi(av[3])));
		}
		else
		{
			printf(" -- strncpy --: \n%s\n\n", strncpy(dest, src, nb));
			printf("-- ft_strncpy --\n");
			printf("%s", ft_strncpy(dest, src, nb));
		}
	}

	if (atoi(av[1]) == 5)
	{
		printf("\t -| 'EX05' FT_STRSTR |-\n\n");
		char str[] = "The end of this string should appear :)";
		char to_find[] = "should";
		char str1[] = "Nothing should appear there";
		char to_find1[] = "should appaer";
		char str2[] = "Let's try ?strangee< one ahah";
		char to_find2[] = "strangee";

		if (ac > 2)
		{
			printf(" -- strstr --: \n%s\n\n", strstr(av[2], av[3]));
			printf("-- ft_strstr --\n");
			printf("%s", ft_strstr(av[2], av[3]));
		}
		else
		{
			printf("str: %s\nto_find: %s\n\n", str, to_find);
			printf("str1: %s\nto_find1: %s\n\n", str1, to_find1);
			printf("str2: %s\nto_find2: %s\n\n", str2, to_find2);
			printf(" -- strstr --\n%s\n%s\n%s\n", strstr(str, to_find), strstr(str1, to_find1),
					strstr(str2, to_find2));
			printf("\n-- ft_strstr --\n%s\n%s\n%s\n", ft_strstr(str, to_find), ft_strstr(str1, to_find1),
					ft_strstr(str2, to_find2));
		}
	}

	if (atoi(av[1]) == 6)
	{
		printf("\t -| 'EX06' FT_STRCMP |-\n\n");
		char s1[] = "Matrix 101";
		char s2[] = "Matrix 101";
		char s1b[] = "Matrix Cent un";
		char s2b[] = "Matrix Deux cent";
		printf("\t\t\t- out - \t\t\t\t\t\t "BLU "- ft_strcmp - "RESET""GRN" \t\t\t\t\t\t - strcmp - "RESET"\n\n");

		if (ac > 2)
		{
			if (ft_strcmp(av[2], av[3]) != strcmp(av[2], av[3]))
				printf(RESET"%s "CYN"/ "RESET"%s "BLU "|| "RESET""RED"\t\t%d"RESET" \t\t"BLU "|| "RESET""GRN"%d"RESET"\n",
					   	av[2], av[3], ft_strcmp(av[2], av[3]), strcmp(av[2], av[3]));
			else
				printf(RESET"%s "CYN"/ "RESET"%s "BLU "|| "RESET""GRN"\t\t%d"RESET" \t\t"BLU "|| "RESET""GRN"%d"RESET"\n",
						av[2], av[3], ft_strcmp(av[2], av[3]), strcmp(av[2], av[3]));
		}
		else
		{
			if (ft_strcmp(s1, s2) != strcmp(s1, s2))
				printf(RESET"\t%s "CYN"/ "RESET"%s "BLU "\t\t\t\t||\t "RESET""GRN"\t\t%d"RESET" \t\t\t\t\t"BLU "||\t\t\t "RESET""GRN"%d"RESET"\n",
					   	s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
			else
				printf(RESET"\t%s "CYN"/ "RESET"%s "BLU "\t\t\t\t||\t "RESET""GRN"\t\t%d"RESET" \t\t\t\t\t"BLU "||\t\t\t "RESET""GRN"%d"RESET"\n",
						s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
			if (ft_strcmp(s1b, s2b) != strcmp(s1b, s2b))
				printf(RESET"\t%s "CYN"/ "RESET"%s "BLU "\t\t\t||\t "RESET""GRN"\t\t%d"RESET" \t\t\t\t\t"BLU "||\t\t\t "RESET""GRN"%d"RESET"\n",
					   	s1b, s2b, ft_strcmp(s1b, s2b), strcmp(s1b, s2b));
			else
				printf(RESET"\t%s "CYN"/ "RESET"%s "BLU "\t\t\t||\t "RESET""GRN"\t\t%d"RESET" \t\t\t\t\t"BLU "||\t\t\t "RESET""GRN"%d"RESET"\n",
						s1b, s2b, ft_strcmp(s1b, s2b), strcmp(s1b, s2b));	
		}
	}

	if (atoi(av[1]) == 7)
	{
		printf(YEL "\t\t\t\t\t\t\t\t\t    -| 'EX07' FT_STRNCMP |-\n\n\n\n" RESET);
		char s1[] = "Matrix 101";
		char s2[] = "Matrix 101";
		char s1b[] = "Matrix Cent un";
		char s2b[] = "Matrix Deux cent";
		int n = 8;
		int n1 = 10;
		printf("\t\t\t- out - \t\t\t\t\t\t "BLU "- ft_strncmp - "RESET""GRN" \t\t\t\t\t\t - strncmp - "RESET"\n\n");

		if (ac > 2)
		{
			if (ft_strncmp(av[2], av[3], atoi(av[4])) != strncmp(av[2], av[3], atoi(av[4])))
				printf("\t%s "CYN"/ "RESET"%s "CYN"/ "RESET" %d "BLU "\t\t\t\t||\t "RESET""GRN"\t\t%d"RESET" \t\t\t\t\t"BLU "||\t\t\t "RESET""GRN"%d"RESET"\n",
						av[2], av[3], atoi(av[4]), ft_strncmp(av[2], av[3], atoi(av[4])), strncmp(av[2], av[3], atoi(av[4])));
			else
				printf("\t%s "CYN"/ "RESET"%s "CYN"/ "RESET" %d "BLU "\t\t\t\t||\t "RESET""GRN"\t\t%d"RESET" \t\t\t\t\t"BLU "||\t\t\t "RESET""GRN"%d"RESET"\n",
						av[2], av[3], atoi(av[4]), ft_strncmp(av[2], av[3], atoi(av[4])), strncmp(av[2], av[3], atoi(av[4])));
		}
		else
		{
			if (ft_strncmp(s1, s2, n) != strncmp(s1, s2, n))
				printf(RESET"\t%s "CYN"/ "RESET"%s "CYN"/ "RESET" %d "BLU "\t\t\t\t||\t "RESET""GRN"\t\t%d"RESET" \t\t\t\t\t"BLU "||\t\t\t "RESET""GRN"%d"RESET"\n",
					   	s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
			else
				printf(RESET"\t%s "CYN"/ "RESET"%s "CYN"/ "RESET" %d "BLU "\t\t\t\t||\t "RESET""GRN"\t\t%d"RESET" \t\t\t\t\t"BLU "||\t\t\t "RESET""GRN"%d"RESET"\n",
						s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
			if (ft_strncmp(s1b, s2b, n) != strncmp(s1b, s2b, n))
				printf(RESET"\t%s "CYN"/ "RESET"%s "CYN"/ "RESET" %d "BLU "\t\t\t||\t "RESET""GRN"\t\t%d"RESET" \t\t\t\t\t"BLU "||\t\t\t "RESET""GRN"%d"RESET"\n",
						s1b, s2b, n, ft_strncmp(s1b, s2b, n1), strncmp(s1b, s2b, n1));
			else
				printf(RESET"\t%s "CYN"/ "RESET"%s "CYN"/ "RESET" %d "BLU "\t\t\t||\t "RESET""GRN"\t\t%d"RESET" \t\t\t\t\t"BLU "||\t\t\t "RESET""GRN"%d"RESET"\n",
						s1b, s2b, n, ft_strncmp(s1b, s2b, n1), strncmp(s1b, s2b, n1));
		}
	}

	if (atoi(av[1]) == 8)
	{
		printf(YEL "\t\t\t\t\t\t\t\t\t    -| 'EX08' FT_STRUPCASE |-\n\n\n\n" RESET);
		char s1[] = "this string contain only lower caracters";
		char s2[] = "THIS STRING CONTAIN ONLY UPPER CARACTERS";
		char s3[] = "THIS one CONTAIN both UPPER and LOWER C*";
		printf("\t\t\t- out - \t\t\t\t\t\t "BLU "- ft_strupcase - "RESET""GRN" \t\t\t\t\t\t - my_strupcase - "RESET"\n\n");

		if (ac > 2)
		{
			if (ft_strupcase(av[2]) != my_strupcase(av[2]))
				printf("%s\t\t"RED"%s"RESET"\t\t\t"GRN"%s"RESET"\n", av[2], ft_strupcase(av[2]), my_strupcase(av[2]));
			else
				printf(GRN"\t%s\t\t\t%s\n", ft_strupcase(av[2]), my_strupcase(av[2]));
			printf(RESET);	
		}
		else
		{
			printf("\t%s", s1);
			if (ft_strupcase(s1) != my_strupcase(s1))
				printf(RESET"\t\t"BLU "||\t "RESET""RED"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strupcase(s1), my_strupcase(s1));
			else
				printf(RESET"\t\t"BLU "||\t "RESET""GRN"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strupcase(s1), my_strupcase(s1));
			printf("\t%s", s2);
			if (ft_strupcase(s2) != my_strupcase(s2))
				printf(RESET"\t\t"BLU "||\t "RESET""RED"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strupcase(s2), my_strupcase(s2));
			else
				printf(RESET"\t\t"BLU "||\t "RESET""GRN"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strupcase(s2), my_strupcase(s2));
			printf("\t%s", s3);
			if (ft_strupcase(s3) != my_strupcase(s3))
				printf(RESET"\t\t"BLU "||\t "RESET""RED"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strupcase(s3), my_strupcase(s3));
			else
				printf(RESET"\t\t"BLU "||\t "RESET""GRN"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strupcase(s3), my_strupcase(s3));
		}

	}

	if (atoi(av[1]) == 9)
	{
		printf(YEL "\t\t\t\t\t\t\t\t\t    -| 'EX09' FT_STRLOWCASE |-\n\n\n\n" RESET);
		char s1[] = "this string contain only lower caracters";
		char s2[] = "THIS STRING CONTAIN ONLY UPPER CARACTERS";
		char s3[] = "THIS one CONTAIN both UPPER and LOWER C*";
		printf("\t\t\t- out - \t\t\t\t\t\t "BLU "- ft_strlowcase - "RESET""GRN" \t\t\t\t\t\t - my_strlowcase - "RESET"\n\n");

		if (ac > 2)
		{
			if (ft_strlowcase(av[2]) != my_strlowcase(av[2]))
				printf("%s\t\t"RED"%s"RESET"\t\t\t"GRN"%s"RESET"\n", av[2], ft_strlowcase(av[2]), my_strlowcase(av[2]));
			else
				printf(GRN"\t%s\t\t\t%s\n", ft_strlowcase(av[2]), my_strlowcase(av[2]));
			printf(RESET);	
		}
		else
		{
			printf("\t%s", s1);
			if (ft_strlowcase(s1) != my_strlowcase(s1))
				printf(RESET"\t\t"BLU "||\t "RESET""RED"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strlowcase(s1), my_strlowcase(s1));
			else
				printf(RESET"\t\t"BLU "||\t "RESET""GRN"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strlowcase(s1), my_strlowcase(s1));
			printf("\t%s ", s2);
			if (ft_strlowcase(s2) != my_strlowcase(s2))
				printf(RESET"\t\t"BLU "||\t "RESET""RED"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strlowcase(s2), my_strlowcase(s2));
			else
				printf(RESET"\t\t"BLU "||\t "RESET""GRN"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strlowcase(s2), my_strlowcase(s2));
			printf("\t%s ", s3);
			if (ft_strlowcase(s3) != my_strlowcase(s3))
				printf(RESET"\t\t"BLU "||\t "RESET""RED"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strlowcase(s3), my_strlowcase(s3));
			else
				printf(RESET"\t\t"BLU "||\t "RESET""GRN"%s "RESET""BLU "\t\t||\t"RESET""GRN"%s"RESET"\n", 
						ft_strlowcase(s3), my_strlowcase(s3));
		}
	}

	if (atoi(av[1]) == 10)
	{
		printf(YEL "\t\t\t\t\t\t\t\t\t    -| 'EX10' FT_STRCAPITALIZE |-\n\n\n\n" RESET);
		char s1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
		printf("\t\t\t- out - \t\t\t\t\t\t "BLU "- ft_strcapitalize - "RESET""GRN" \t\t\t\t\t\t - my_strcapitalize - "RESET"\n\n%s ", s1);

		if (ac > 2)
		{
			if (ft_strcapitalize(av[2]) != my_strcapitalize(av[2]))
				printf("%s\t\t"RED"%s"RESET"\t\t\t"GRN"%s"RESET"\n", av[2], ft_strcapitalize(av[2]), my_strcapitalize(av[2]));
			else
				printf(GRN"\t%s\t\t\t%s\n", ft_strcapitalize(av[2]), my_strcapitalize(av[2]));
			printf(RESET);
		}
		else
		{
			if (ft_strcapitalize(s1) != my_strcapitalize(s1))
				printf("%s "RED"%s"RESET" "GRN"%s"RESET"\n", s1, ft_strcapitalize(s1), my_strcapitalize(s1));
			else
				printf(""BLU "|| "RESET""GRN"%s "RESET""BLU "|| "RESET""GRN"%s"RESET"\n", ft_strcapitalize(s1), my_strcapitalize(s1));
		}
	}
	
	if (atoi(av[1]) == 11)
	{
		printf(YEL "\t\t -| 'EX11' FT_STR_IS_ALPHA |-\n\n" RESET);
		char s1[] = "string";
		char s2[] = "This one don't";
		char s3[] = "Hello World";
		printf("\t- out - \t"BLU " - ft_str_is_alpha - \t "RESET""GRN"- my_str_isalpha -\n\n" RESET);

		if (ac > 2)
		{
			if (ft_str_is_alpha(av[2]) != isalpha(av[2]))
				printf("%s\t\t"RED"%i"RESET"\t\t\t"GRN"%i"RESET"\n", av[2], ft_str_is_alpha(av[2]), isalpha(av[2]));
			else
				printf(GRN"\t%i\t\t\t%i\n", ft_str_is_alpha(av[2]), isalpha(av[2]));
			printf(RESET);
		}
		else
		{
			if (ft_str_is_alpha(s1) != my_str_isalpha(s1))
				printf("%s\t\t\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s1, ft_str_is_alpha(s1), my_str_isalpha(s1));
			else
				printf("%s\t\t\t\t"GRN"  %i\t\t\t %i"RESET"\n",s1, ft_str_is_alpha(s1), my_str_isalpha(s1));
			if (ft_str_is_alpha(s2) != my_str_isalpha(s2))
				printf("%s\t\t\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s2, ft_str_is_alpha(s2), my_str_isalpha(s2));
			else
				printf("%s\t\t\t"GRN"  %i\t\t\t %i"RESET"\n",s2, ft_str_is_alpha(s2), my_str_isalpha(s2));
			if (ft_str_is_alpha(s3) != my_str_isalpha(s3))
				printf("%s\t\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s3, ft_str_is_alpha(s3), my_str_isalpha(s3));
			else
				printf("%s\t\t\t\t"GRN"  %i\t\t\t %i"RESET"\n",s3, ft_str_is_alpha(s3), my_str_isalpha(s3));
		}
	}
	if (atoi(av[1]) == 12)
	{
		printf(YEL "\t\t -| 'EX12' FT_STR_IS_NUMERIC |-\n\n" RESET);
		char s1[] = "Numeric: 101";
		char s2[] = "42 101";
		char s3[] = "101";
		printf("\t- out - \t"BLU " - ft_str_is_numeric -\t "RESET""GRN"- my_str_isnumeric -\n\n" RESET);

		if (ac > 2)
		{
			if (ft_str_is_numeric(av[2]) != my_str_isnumeric(av[2]))
				printf("%s\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", av[2], ft_str_is_numeric(av[2]), my_str_isnumeric(av[2]));
			else
				printf(GRN"\t  %i\t\t\t %i\n", ft_str_is_numeric(av[2]), my_str_isnumeric(av[2]));
			printf(RESET);
		}
		else
		{
			if (ft_str_is_numeric(s1) != my_str_isnumeric(s1))
				printf("%s\t\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s1, ft_str_is_numeric(s1), my_str_isnumeric(s1));
			else
				printf("%s\t\t\t"GRN"  %i\t\t\t %i"RESET"\n",s1, ft_str_is_numeric(s1), my_str_isnumeric(s1));
			if (ft_str_is_numeric(s2) != my_str_isnumeric(s2))
				printf("%s\t\t\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s2, ft_str_is_numeric(s2), my_str_isnumeric(s2));
			else
				printf("%s\t\t\t\t"GRN"  %i\t\t\t %i"RESET"\n",s2, ft_str_is_numeric(s2), my_str_isnumeric(s2));
			if (ft_str_is_numeric(s3) != my_str_isnumeric(s3))
				printf("%s\t\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s3, ft_str_is_numeric(s3), my_str_isnumeric(s3));
			else
				printf("%s\t\t\t\t"GRN"  %i\t\t\t %i"RESET"\n",s3, ft_str_is_numeric(s3), my_str_isnumeric(s3));
		}
	}
	if (atoi(av[1]) == 13)
	{
		printf(YEL "\t\t -| 'EX13' FT_STR_IS_LOWERCASE |-\n\n" RESET);
		char s1[] = "numeric lower";
		char s2[] = "numeric Notlower";
		char s3[] = "numeric lower 101";
		printf("\t- out -\t\t "BLU "- ft_str_is_lowercase - "RESET""GRN" - my_str_islowercase -\n\n" RESET);

		if (ac > 2)
		{
			if (ft_str_is_lowercase(av[2]) != my_str_islowercase(av[2]))
				printf("%s\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", av[2], ft_str_is_lowercase(av[2]), my_str_islowercase(av[2]));
			else
				printf(GRN"\t  %i\t\t\t %i\n", ft_str_is_lowercase(av[2]), my_str_islowercase(av[2]));
			printf(RESET);
		}
		else
		{
			if (ft_str_is_lowercase(s1) != my_str_islowercase(s1))
				printf("%s\t\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s1, ft_str_is_lowercase(s1), my_str_islowercase(s1));
			else
				printf("%s\t\t\t"GRN"  %i\t\t\t %i"RESET"\n",s1, ft_str_is_lowercase(s1), my_str_islowercase(s1));
			if (ft_str_is_lowercase(s2) != my_str_islowercase(s2))
				printf("%s\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s2, ft_str_is_lowercase(s2), my_str_islowercase(s2));
			else
				printf("%s\t\t"GRN"  %i\t\t\t %i"RESET"\n",s2, ft_str_is_lowercase(s2), my_str_islowercase(s2));
			if (ft_str_is_lowercase(s3) != my_str_islowercase(s3))
				printf("%s\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s3, ft_str_is_lowercase(s3), my_str_islowercase(s3));
			else
				printf("%s\t\t"GRN"  %i\t\t\t %i"RESET"\n",s3, ft_str_is_lowercase(s3), my_str_islowercase(s3));
		}
	}

	if (atoi(av[1]) == 14)
	{
		printf(YEL "\t\t -| 'EX14' FT_STR_IS_UPPERCASE |-\n\n" RESET);
		char s1[] = "NUMERIC UPPER";
		char s2[] = "numeric notUPPER";
		char s3[] = "NUMERIC UPPER 101";
		printf("\t- out - \t"BLU "- ft_str_is_uppercase - "RESET""GRN" - my_str_isuppercase -\n\n" RESET);

		if (ac > 2)
		{
			if (ft_str_is_uppercase(av[2]) != my_str_isuppercase(av[2]))
				printf("%s\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", av[2], ft_str_is_uppercase(av[2]), my_str_isuppercase(av[2]));
			else
				printf(GRN"\t %i\t\t\t%i\n", ft_str_is_uppercase(av[2]), my_str_isuppercase(av[2]));
			printf(RESET);
		}
		else
		{
			if (ft_str_is_uppercase(s1) != my_str_isuppercase(s1))
				printf("%s\t\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s1, ft_str_is_uppercase(s1), my_str_isuppercase(s1));
			else
				printf("%s\t\t\t"GRN"  %i\t\t\t %i"RESET"\n",s1, ft_str_is_uppercase(s1), my_str_isuppercase(s1));
			if (ft_str_is_uppercase(s2) != my_str_isuppercase(s2))
				printf("%s\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s2, ft_str_is_uppercase(s2), my_str_isuppercase(s2));
			else
				printf("%s\t\t"GRN"  %i\t\t\t %i"RESET"\n",s2, ft_str_is_uppercase(s2), my_str_isuppercase(s2));
			if (ft_str_is_uppercase(s3) != my_str_isuppercase(s3))
				printf("%s\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s3, ft_str_is_uppercase(s3), my_str_isuppercase(s3));
			else
				printf("%s\t\t"GRN"  %i\t\t\t %i"RESET"\n",s3, ft_str_is_uppercase(s3), my_str_isuppercase(s3));
		}
	}
	if (atoi(av[1]) == 15)
	{
		printf(YEL "\t\t -| 'EX15' FT_STR_IS_PRINTABLE |-\n\n" RESET);
		char s1[] = "printable 12 :?< *";
		char s2[] = "\\./;'[]124!@#$&#$%((*(_*_)";
		char s3[] = "";
		printf("\t- out - \t "BLU "- ft_str_is_printable - "RESET""GRN" - my_str_isprintable -\n\n" RESET);

		if (ac > 2)
		{
			if (ft_str_is_printable(av[2]) != my_str_isprintable(av[2]))
				printf("%s\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", av[2], ft_str_is_printable(av[2]), my_str_isprintable(av[2]));
			else
				printf(GRN"\t  %i\t\t\t %i\n", ft_str_is_printable(av[2]), my_str_isprintable(av[2]));
			printf(RESET);
		}
		else
		{
			if (ft_str_is_printable(s1) != my_str_isprintable(s1))
				printf("%s\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s1, ft_str_is_printable(s1), my_str_isprintable(s1));
			else
				printf("%s\t\t"GRN"  %i\t\t\t %i"RESET"\n",s1, ft_str_is_printable(s1), my_str_isprintable(s1));
			if (ft_str_is_printable(s2) != my_str_isprintable(s2))
				printf("%s\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s2, ft_str_is_printable(s2), my_str_isprintable(s2));
			else
				printf("%s\t"GRN"  %i\t\t\t %i"RESET"\n",s2, ft_str_is_printable(s2), my_str_isprintable(s2));
			if (ft_str_is_printable(s3) != my_str_isprintable(s3))
				printf("%s\t\t\t\t"RED"  %i"RESET"\t\t\t"GRN" %i"RESET"\n", s3, ft_str_is_printable(s3), my_str_isprintable(s3));
			else
				printf("%s\t\t\t\t"GRN"  %i\t\t\t% i"RESET"\n",s3, ft_str_is_printable(s3), my_str_isprintable(s3));
		}


		if (atoi(av[1]) == 16)
		{
			printf(YEL "\t\t -| 'EX16' FT_STRCAT |-\n\n" RESET);
			char src1[] = "and it works as i wish :)";
			char dst1[] = "I want to concatenate these strings";
			char src2[] = "This string is so huge besind of the other one Oo";
			char dst2[] = "smally one";

			if (ac > 2)
			{
				printf("- out - \t\t"CYN" - ft_strcat - \t"RESET""GRN"- strcat -\n\n" RESET);
				if (ft_strcat(av[2], av[3]) != strcat(av[2], av[3]))
					printf("%s\t\t"RED"%s"RESET"\t\t\t"GRN"%s"RESET"\n", av[2], ft_strcat(av[2], av[3]), strcat(av[2], av[3]));
				else
					printf(""GRN"\t%s\t\t\t%s\n", ft_strcat(av[2], av[3]), strcat(av[2], av[3]));
				printf(RESET);
			}
			else
			{
				printf("- out - \t\t"CYN" - ft_strcat -  "RESET""BLU "- my_strcat -\n\n" RESET);
				if (strcmp(ft_strcat(dst1, src1), strcat(dst1, src1)) != 1)
					printf("%s\t\t"RED"%s"RESET"\t\t\t"GRN"%s"RESET"\n", dst1, ft_strcat(dst1, src1), strcat(dst1, src1));
				else
					printf("%s\t\t"GRN"%s\t\t\t%s"RESET"\n", dst1, ft_strcat(dst1, src1), strcat(dst1, src1));
				if (strcmp(ft_strcat(dst2, src2), strcat(dst2, src2)) != 1)
					printf("%s\t"RED"%s"RESET"\t\t\t"GRN"%s"RESET"\n", dst2, ft_strcat(dst2, src2), strcat(dst2, src2));
				else
					printf("%s\t"GRN"%s\t\t\t%s"RESET"\n",dst2, ft_strcat(dst2, src2), strcat(dst2, src2));
			}
		}
	}
}
