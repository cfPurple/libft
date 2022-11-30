#include "libft.h"
#include <stdlib.h>

static int isaset(char const *s1, char const *set)
{
	if (set[0] == *s1 || set[ft_strlen(set) - 1] == *s1)
		return (1);
	return (0);
}

static int sizetab(char const *s1, char const *set)
{
	int n;

	n = 0;
	while (*s1++)
	{
		if (!(isaset(s1, set)))
			n++;
	}
	return (n);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char* tab;

	i = 0;
	tab = malloc(sizeof(char) * (sizetab(s1, set) + 1));
	if (!tab)
		return (NULL);
	while (*s1)
	{
		if (!(isaset(s1, set)))
			tab[i++] = *s1;
		s1++;
	}
	tab[i] = '\0';
	return (tab);
}