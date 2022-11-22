#include <stdlib.h>

static int	comptemot(char const *s, char c)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	while (s[i])
	{
		while (c == s[i] && s[i])
			i++;
		if (c != s[i] && s[i])
		{
			nbr++;
			while (c != s[i] && s[i])
				i++;
		}
	}
	return (nbr);
}

static int	comptelettre(char const *s, char c)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	while (c != s[i] && s[i])
	{
		nbr++;
		i++;
	}
	return (nbr);
}

char **ft_split(char const *s, char c)
{
	int		n;
	char **tablito;
	char	**tab;
	int		i;

	n = 0;
	if (!(tab= malloc(sizeof(char *) * (comptemot(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (c == *s && *s)
			s++;
		if (!(tab[n] = malloc(sizeof(char) * (comptelettre(s, c) + 1))))
			return (NULL);
		i = 0;
		while (c != *s && *s)
		{
			tab[n][i++] = *s;
			s++;
		}
		tab[n++][i] = '\0';
	}
	tab[n] = NULL;
	tablito = tab;
	free(tab);
	return (tablito);
}
