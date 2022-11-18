#include <stdlib.h>

static int	occurrence(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

static int	lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	comptemot(char *str, char *charset)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	while (str[i])
	{
		while (occurrence(str[i], charset) && str[i])
			i++;
		if (occurrence(str[i], charset) == 0 && str[i])
		{
			nbr++;
			while (occurrence(str[i], charset) == 0 && str[i])
				i++;
		}
	}
	return (nbr);
}

static int	comptelettre(char *str, char *charset)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	while (occurrence(str[i], charset) == 0 && str[i] != 0)
	{
		nbr++;
		i++;
	}
	return (nbr);
}

char **ft_split(char const *s, char c)
{
	int		n;
	char	**tab;
	int		i;
	int		b;
	char	**tablito;

	n = 0;
	b = 0;
	tab = malloc(sizeof(char *) * (comptemot(str, charset) + 1));
	while (*str)
	{
		while (occurrence(*str, charset) && *str)
			str++;
		tab[n] = malloc(sizeof(char) * (comptelettre(str, charset) + 1));
		i = 0;
		while (occurrence(*str, charset) == 0 && str[b] != 0)
		{
			tab[n][i++] = *str;
			str++;
		}
		tab[n++][i] = '\0';
	}
	tab[n] = 0;
	tablito = tab;
	return (tablito);
}
