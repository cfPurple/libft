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

static char **writetab(char **tab, char *str, char c)
{
	int		n;
	int		i;

	n = 0;
	while (*str)
	{
		while (c == *str && *str)
			str++;
		if (*str == '\0')
			break;
		if (c != *str && *str)
		{
			tab[n] = malloc(sizeof(char) * (comptelettre(str, c) + 1));
			if (!tab[n])
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

char **ft_split(char const *s, char c)
{
	char	**tab;
	char *str;

	if (!s)
		return (NULL);
	str = (char *)s;
	tab = malloc(sizeof(char *) * (comptemot(str, c) + 1));
	if (!tab)
		return (NULL);
	tab = writetab(tab, str, c);
	if (!tab)
		return (NULL);
	return (tab);
}
