#include <stdlib.h>
#include "libft.h"

static int	comptemot(char *s, char c)
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

static int	comptelettre(char *s, char c)
{
	int i;

	i = 0;
	while (c != s[i] && s[i])
	{
		i++;
	}
	return (i);
}

char **ft_split(char const *s, char c)
{
	int		n;
	char	**tab;
	int		i;
	char *str;

	n = 0;
	str = (char *)s;
	if (!str || !(tab = malloc(sizeof(char *) * (comptemot(str, c) + 1))))
		return (NULL);
	while (*str)
	{
		while (c == *str && *str)
			str++;
		if (c != *str && *str)
		{
			if (!(tab[n] = malloc(sizeof(char) * (comptelettre(str, c) + 1))))
				return (NULL);
		}
		i = 0;
		while (c != *str && *str)
		{
			tab[n][i++] = *str;
			str++;
		}
		tab[n++][i] = '\0';
	}
	tab[n] = NULL;
	return (tab);
}
