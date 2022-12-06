#include "libft.h"
#include <stdlib.h>

static int isaset(char const s1, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

static int findstart(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (s1[i] && isaset(s1[i], set))
		i++;
	return (i);
}

static int findend(char const *s1, char const *set)
{
	int i;

	i = ft_strlen(s1) - 1;
	while (s1[i] && isaset(s1[i], set))
		i--;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char* tab;
	int end; 
	int start;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = findstart(s1, set);
	end = findend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	tab = malloc(sizeof(char) * ((end - start) + 2));
	if (!tab)
		return (NULL);
	while (start <= end)
	{
			tab[i++] = (char)s1[start++];
	}
	tab[i] = '\0';
	return (tab);
}